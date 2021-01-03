#include <iostream>
#include <thread>
#include <mutex>
#include <time.h>
#include <functional>  // std::bind

// 计算1～COUNT数列之和
static const long long COUNT = 1000000000;

void singleThread(){
    clock_t t1 = clock();

    long long SUM = 0;
    for (long long i = 0; i < COUNT; i++){
        SUM += i;
    }
    std::cout<<"Single Thread: "<<(clock() - t1) * 1.0 / CLOCKS_PER_SEC<< "s"<<std::endl;
}

struct ThreadArg{
    long long base;
    long long length;
    long long sum;
};

void sum(ThreadArg arg){
    long long sum = 0;
    for(long long i=arg.base; i<arg.base+arg.length; i++){
        sum += i;
    }
    // 直接使用for(long long i = arg->base; i < arg->base + arg->length) 和 arg->sum += i; 会慢一些
    // 因为指针的读取比普通栈的读取需要多花费一些时间
}

void multiThreads(){
    clock_t t1 = clock();

    // 将1～count数列平均分为threadCount组，求解每组数列之和，再将其相加得到总和
    const int threadCount = 20;  // 设置并行线程数目
    std::thread threads[threadCount];
    ThreadArg args[threadCount];

    // 初始化线程及其参数
    for(int i=0; i<threadCount; i++){
        long long offset = (COUNT / threadCount) * i;
        args[i].base = offset;
        args[i].length = std::min(COUNT - offset, COUNT / threadCount);
        threads[i] = std::thread(&sum, args[i]);
        // threads[i] = std::thread(std::bind(&sum, args[i]));  // bind会将一个函数对象作为它的参数
    }

    // 启动线程并等待线程退出
    for(int i=0; i<threadCount; i++){
        threads[i].join();  // join()保证了在线程完成后程序才会终结("join"的意思是等待线程返回后再终结)
    }

    long long SUM = 0;
    // 将每组数列之和相加得到总和
    for (int i = 0; i < threadCount; ++i) {
        SUM += args[i].sum;
    }

    std::cout<<"Multi Threads: "<<(clock() - t1) * 1.0 / CLOCKS_PER_SEC<< "s"<<std::endl;
}


std::mutex mtx;
long long SUM = 0;

void sum2(ThreadArg arg){
    long long sum = 0;
    for(long long i=arg.base; i<arg.base+arg.length; i++){
        sum += i;
    }

    mtx.lock();
    SUM += sum;
    mtx.unlock();
}

void multiThreads_with_mutex(){
    clock_t t1 = clock();

    const int threadCount = 20;  // 设置并行线程数目
    std::thread threads[threadCount];
    ThreadArg args[threadCount];

    // 初始化线程及其参数
    for(int i=0; i<threadCount; i++){
        long long offset = (COUNT / threadCount) * i;
        args[i].base = offset;
        args[i].length = std::min(COUNT - offset, COUNT / threadCount);
        threads[i] = std::thread(sum2, args[i]);
    }

    // 启动线程并等待线程退出
    for(int i=0; i<threadCount; i++){
        threads[i].join();
    }

    std::cout<<"Multi Threads (With Mutex): "<<(clock() - t1) * 1.0 / CLOCKS_PER_SEC<< "s"<<std::endl;
}

int main(){
    singleThread();
    multiThreads();
    multiThreads_with_mutex();  // 加锁要快一些
}
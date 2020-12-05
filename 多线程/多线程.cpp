#include <iostream>
#include <thread>
#include <time.h>

using namespace std;

struct ThreadArg{
    long long base;
    long long length;
    long long sum;
};

void sum(ThreadArg *arg){
    long long begin = arg->base;
    long long end = arg->base + arg->length;
    long long sum = 0;
    for(long long i=begin; i<end; i++){
        sum += i;
    }
    arg->sum = sum;
    // 直接使用for(long long i = arg->base; i < arg->base + arg->length) 和 arg->sum += i; 会慢一些
    // 因为指针的读取比普通栈的读取需要多花费一些时间
}

// 计算1～COUNT数列之和
static const long long COUNT = 1000000000;

void singleThread(){
    clock_t t1 = clock();

    long long commonMethodSum = 0;
    for (long long i = 0; i < COUNT; i++){
        commonMethodSum += i;
    }
    cout<<"Single Thread: "<<(clock() - t1) * 1.0 / CLOCKS_PER_SEC<< "s"<<endl;
}

void multiThreads(){
    clock_t t1 = clock();

    // 将1～count数列平均分为threadCount组，求解每组数列之和，再将其相加得到总和
    const int threadCount = 20;  // 设置并行线程数目
    thread threads[threadCount];
    ThreadArg args[threadCount];

    // 初始化线程及其参数
    for(int i=0; i<threadCount; i++){
        long long offset = (COUNT / threadCount) * i;
        args[i].base = offset;
        args[i].length = min(COUNT - offset, COUNT / threadCount);
        threads[i] = thread(sum, &args[i]);
    }

    // 启动线程并等待线程退出
    for(int i=0; i<threadCount; i++){
        threads[i].join();
    }

    long long parallelMethodSum = 0;
    // 将每组数列之和相加得到总和
    for (int i = 0; i < threadCount; ++i) {
        parallelMethodSum += args[i].sum;
    }

    cout<<"Multi Threads: "<<(clock() - t1) * 1.0 / CLOCKS_PER_SEC<< "s"<<endl;
}

int main(){
    singleThread();
    multiThreads();
}
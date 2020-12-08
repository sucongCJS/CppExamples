#include <thread>
#include <iostream>
// #include <vector>

class C {
public:
    void foo(int &passingVal){
        std::cout<<passingVal<<std::endl;
    }

    void foo2(int &passingVal){
        std::thread t(&foo, this, std::ref(passingVal));  // C++11多线程中引用传递参数时，不能直接写变量，因为这实际上进行的是值传递，尽管你在定义函数时使用了&来希望是引用传递
        t.join();
    }
};

int main(){
    int passingVal = 10;

    C a;
    a.foo2(passingVal);
}

/*
std::ref: https://en.cppreference.com/w/cpp/utility/functional/ref
传引用: https://blog.csdn.net/Poo_Chai/article/details/98847740
*/

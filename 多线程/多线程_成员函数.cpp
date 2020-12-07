#include <thread>
#include <iostream>

class C {
private:
    int val;

public:
    C(int val): val(val){};
    // C(int val){
    //     this->val = val;
    // }
    
    void foo(int i, int j){
        std::cout <<i<<' '<<j<<' '<<val<<' '<< std::endl;
    }

    void foo2(){
        std::thread t(&foo, this, 1, 2);
        t.join();
    }
};

/*
* 
std::thread 调用类的成员函数需要传递类的一个对象指针作为参数
如果是在类的成员函数中处理thread，传入 this 即可 如foo2
* */
int main(){
    std::thread t(&C::foo, C(12), 1, 2);
    t.join();

    C a(10);
    a.foo2();

    std::thread t2(&C::foo, a, 1, 2);
    t2.join();
}
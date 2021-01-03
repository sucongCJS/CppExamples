#include <iostream>
#include <thread>
#include <unistd.h>

class Test{
public:
    Test() : testThread_(print){}
    
    void print(void){
        std::cout << "hello" << std::endl;
    }

private:
    std::thread testThread_;
};

int main(){
    Test test;
    sleep(1000);
    return 0;
}
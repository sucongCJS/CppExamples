#include <iostream>
#include <optional>  // 必须c++17
using namespace std;

int main()
{
    std::optional<int> pp = 1;
    if (pp) cout << *pp << endl; // 1
    pp = nullopt;
    if (pp) cout << *pp << endl; // 不输出

    
}

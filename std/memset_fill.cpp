/*
memset函数
    按照字节填充某字符
    在头文件<cstring>里面
    因为memset函数按照字节填充，所以一般memset只能用来填充char型数组，（因为只有char型占一个字节）如果填充int型数组，除了0和-1，其他的不能。因为只有00000000 = 0，-1同理，如果我们把每一位都填充“1”，会导致变成填充入“11111111”
    应该比fill快

fill函数
    按照单元赋值，将一个区间的元素都赋同一个值
    在头文件<algorithm>里面
    fill函数可以赋值任何
*/

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int arr[10];
    fill(arr, arr + 10, 2);  // 全部赋值为2

    int arr2[20];
    memset(arr2, 0, sizeof arr2);

    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill(v.begin(), v.end(), -1);  // 全部赋值为-1

    int f[10];
    memset(f, 0x3f, sizeof f);  // 初始化为正无穷(0x3f3f3f3f)

    // https://www.luogu.com.cn/blog/79017/about-memset
    float f2[100];  // double 同理
    memset(f2, 0,sizeof(f2));//初始化为0
    memset(f2, 127,sizeof(f2));//初始化为正无穷
    // memset(f2, 0x3f,sizeof(f2));//结果为0.747058808803558

    for(const auto& i: f2)
        cout<<i<<endl;

    return 0;
}
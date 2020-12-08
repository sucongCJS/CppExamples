#include <bits/stdc++.h>
#include <d:/x/CppExample/Eigen/eigen3/Eigen/Eigen>

using namespace std;
using namespace Eigen;

struct light
{
    Eigen::Vector3f position;
    Eigen::Vector3f intensity;
};

int main(){
    Eigen::Vector3f ks = Eigen::Vector3f(0.7937, 0.7937, 0.7937);
    auto l1 = light{{20, 20, 20}, {500, 500, 500}};

    // 对应元素相乘
    // cout<<ks.array() * l1.intensity.array()<<endl<<endl;
    // cout<<ks * l1.intensity[0]<<endl<<endl;
    // cout<<l1.intensity[0]<<endl<<endl;

    // 取向量的前几个
    auto vector2 = ks.head(2);
    cout<<vector2;
}
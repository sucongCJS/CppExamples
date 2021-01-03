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
    // 乘法
    // Eigen::Vector3f ks = Eigen::Vector3f(0.7937, 0.7937, 0.7937);
    // auto l1 = light{{20, 20, 20}, {500, 500, 500}};

    // 对应元素相乘
    // cout<<ks.array() * l1.intensity.array()<<endl<<endl;
    // cout<<ks.cwiseProduct(l1.intensity)<<endl;  // 两个等效


    // 取向量的前几个
    // auto vector2 = ks.head(2);
    // cout<<vector2;


    // norm, normalize, normalized
    /*
    - normalize: Normalizes a compile time known vector (as in a vector that is known to be a vector at compile time) in place, returns nothing.
    - normalized: Returns the above as a constructed copy, doesnt affect the class. You can use it to assign - Vector normCopy = vect.normalized().
    - norm: Returns the norm value of the matrix. Ie, the square root of the sum of the square of all the matrix entries.
    */
    // Vector3f aa(2, 3, 1);
    // cout<<aa.norm();  // sqrt(2^2 + 3^2 + 1^2)
}
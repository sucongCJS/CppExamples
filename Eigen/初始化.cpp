#include <bits/stdc++.h>
#include <d:/x/CppExample/Eigen/eigen3/Eigen/Eigen>

using namespace std;
using namespace Eigen;

int main(){
    Vector2f a(1, 2);
    Vector2f b = {3, 4};

    Matrix2f m;
    m<<a, b;
    // m = 1 3
    //     2 4

    cout<<m<<endl;
}
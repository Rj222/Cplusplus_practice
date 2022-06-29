// @Time    : 2022/06/17 14:12:12
// @Author  : Rj.Zhao
// @File    : bmimetric.cpp
// @Software: VsCode

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight;
    double height;
    double bmi;

    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    bmi = weight/height/height;
    // cout << "BMI is: " << setprecision(4) << bmi << endl;
    printf("BMI is: %0.2f",bmi);
    return 0;
}

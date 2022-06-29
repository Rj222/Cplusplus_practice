// @Time    : 2022/06/20 10:17:40
// @Author  : Rj.Zhao
// @File    : bmiimperial.cpp
// @Software: VsCode

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weightInPounds;
    double heightIninches;
    double weight;
    double height;
    double bmi;

    cout<<"Please enter weight in pounds: ";
    cin>>weightInPounds;
    cout<<"Please enter height in inches: ";
    cin>>heightIninches;
    weight = weightInPounds*0.453592;
    height = heightIninches*0.0254;
    bmi = weight/height/height;
    printf("BMI is: %0.2f",bmi);
    return 0;
}

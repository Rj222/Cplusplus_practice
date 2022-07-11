// @Time    : 2022/07/11 12:33:00
// @Author  : Rj.Zhao
// @File    : gradeclass.cpp
// @Software: VsCode

#include <iostream>

using namespace std;
int grade1;
int grade2;

int main()
{
    cout<<"Please enter 2 grades, separated by a space:"<<endl;
    cin>>grade1>>grade2;
    if (grade1<60 && grade2<60)
    cout<<"Student Failed:("<<endl;
    else if (grade1>=95 && grade2>=95)
    cout<<"Student Graduated with Honors:)"<<endl;
    else
    cout<<"Student Graduated!"<<endl;
    return 0;
}

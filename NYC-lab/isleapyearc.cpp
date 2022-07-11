// @Time    : 2022/07/11 00:12:14
// @Author  : Rj.Zhao
// @File    : isleapyearc.cpp
// @Software: VsCode

#include <iostream>
#include <string>

using namespace std;
int numOfYear;

int main(int argc, char *argv[])
{
    numOfYear = stoi(argv[1]);
    
    if(numOfYear%400==0)
    cout<<numOfYear<<" was a leap year";
    else if(numOfYear%4==0 && numOfYear%100!=0)
    cout<<numOfYear<<" was a leap year";
    else
    cout<<numOfYear<<" was not a leap year";
    return 0;
}

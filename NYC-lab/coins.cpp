// @Time    : 2022/06/17 01:42:07
// @Author  : Rj.Zhao
// @File    : coins.cpp
// @Software: VsCode

#include <iostream>

using namespace std;

int main()
{
    int quarterNum;
    int dimeNum;
    int nickelNum;
    int pennyNum;
    int dollarNum;
    int centNum;
    int totalCentNum;

    cout<<"Please enter the amount of money to convert:"<<'\n'<<"# of dollars:";
    cin>>dollarNum;
    cout<<"# of cents:";
    cin>>centNum;
    //calculating

    totalCentNum = 100*dollarNum + centNum;
    quarterNum = totalCentNum/25;
    dimeNum = totalCentNum%25/10;
    nickelNum = totalCentNum%25%10/5;
    pennyNum = totalCentNum%25%10%5;
    cout<<"The coins are "<<quarterNum<<" quarters, "<<dimeNum<<" dimes, "<<nickelNum<<" nickels and "<<pennyNum<<" pennies"<<endl;
    return 0;

}

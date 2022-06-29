// @Time    : 2022/06/07 22:40:43
// @Author  : Rj.Zhao
// @File    : counter.cpp
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

    cout<<"Please enter the number of coins:"<<'\n'<<"# of quarters:";
    cin>>quarterNum;
    cout<<"# of dimes:";
    cin>>dimeNum;
    cout<<"# of nickels:";
    cin>>nickelNum;
    cout<<"# of pennies:";
    cin>>pennyNum;

    //calculating

    totalCentNum = 25*quarterNum + 10*dimeNum + 5*nickelNum + pennyNum;
    dollarNum = totalCentNum/100;
    centNum = totalCentNum%100;

    cout<<"The total is "<<dollarNum<<" dollars and "<<centNum<<" cents"<<endl;
    return 0;
}



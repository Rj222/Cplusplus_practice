// @Time    : 2022/07/11 20:30:20
// @Author  : Rj.Zhao
// @File    : countoddeven.cpp
// @Software: VsCode

#include <iostream>

using namespace std;

int enter1;
int enter2;
int enter3;
int enter4;
int numOfOdd;

int oddoreven(int num){
    if (num%2==0)
    return 0;
    else
    return 1;
}

int main()
{
    cout<<"Please enter 4 positive integers, separated by a space: "<<endl;
    cin>>enter1>>enter2>>enter3>>enter4;
    numOfOdd = oddoreven(enter1);
    numOfOdd += oddoreven(enter2);
    numOfOdd += oddoreven(enter3);
    numOfOdd += oddoreven(enter4);

    if (numOfOdd>2)
    cout<<"more odds";
    else if (numOfOdd==2)
    cout<<"same number of evens and odds";
    else
    cout<<"more evens";
    return 0;
}



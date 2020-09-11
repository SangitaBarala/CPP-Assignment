/* Write a program that tells what coin to give out for any amount of change from 1 cent to 99 cents. 
For example, if the amount is 86 cents, the output would be something like the following:

86 cents can be given as
3 quarter(s) 1 dime(s) and 1 penny(pennies)*/



#include <iostream>
#include<Math.h>
using namespace std;

int main()
{
    int amount;

    cout<<"enter the amount you need change of:"<<endl;
    cin>>amount;

    int quarters=0;
    int dimes=0;
    int nickles=0;
    int pennies=0;
    
    if(amount<1 || amount>99)
    {
        cout<<"please enter value between 1 and 99 cents"<<endl;
    }
    else
    {
        cout<<amount<<" "<<"can be given as:"<<endl;
    while(amount>=25)
    {
        quarters++;
        amount-=25;
    }
     while(amount>=10)
    {
        dimes++;
        amount-=10;
    }
     while(amount>=5)
    {
        nickles++;
        amount-=5;
    }
     while(amount>=1)
    {
        pennies++;
        amount-=1;
    }
    }
    cout<<quarters<<" "<<"quarters"<<endl;
    cout<<dimes<<" "<<"dimes"<<endl;
    cout<<nickles<<" "<<"nickles"<<endl;
    cout<<pennies<<" "<<"pennies";
    return 0;
}
/*Write a C++ program that solves a quadratic equation to find its roots.The value of the discriminant (b2 − 4ac) determines the nature
of roots. If the value of the discriminant is zero, then the equation has a single real root. If the value of the discriminant is
positive then the equation has two real roots. If the value of the discriminant is negative, then the equation has two complex roots.*/


#include <iostream>
#include<Math.h>
using namespace std;
int main()
{

    float a,b,c,root1,root2,discriminant,realPart,imaginaryPart;
    
    cout<<"Enter the value of coefficient a, b and c:";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    if(discriminant==0)
    {
        cout<<"Roots are real and same and it has single root"<<endl;
        root1=(-b+sqrt(discriminant))/(2*a);
        cout<<"root1=root2="<<root1<<endl;
    }
    else if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        cout<<"Roots are real and different and it has two roots"<<endl;
        cout<<"root1="<<root1<<endl;
        cout<<"root2="<<root2<<endl;
    }
    else
    {
       realPart=-b/(2*a);
       imaginaryPart=sqrt(-discriminant)/(2*a);
       cout<<"Roots different and it has two complex roots"<<endl;
       cout<<"root1="<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
       cout<<"root2="<<realPart<<"-"<<imaginaryPart<<"i"<<endl;
    }
    return 0;
}

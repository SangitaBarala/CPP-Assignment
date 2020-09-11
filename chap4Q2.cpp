/*Write a program that asks for the user’s height, weight, and age, and then computes clothing sizes according to the formulas:

-> Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.
-> Jacket size (chest in inches) = height times weight divided by 288 and then adjusted by adding 1/8 of an inch for
each 10 years over age 30. (Note that the adjustment only takes place after a full 10 years. So, there is no adjustment for ages 30 through 39, but 1/8 of an inch is added for age 40.)
-> Waist in inches = weight divided by 5.7 and then adjusted by adding 1/10 of an inch for each 2 years over age 28. 
(Note that the adjustment only takes place after a full 2 years. So, there is no adjustment for age 29, but 1/10 of an inch is added for age 30.)

*/

#include<iostream>
using namespace std;
double fun_hatSize(double,double);
double fun_jacketSize(double,double,int);
double fun_waistSize(double,int);
int main()
{
    double height,weight,hatSize,jacketSize,waistSize;
    int age;

    cout<<"Enter height";
    cin>>height;
    cout<<"Enter weight";
    cin>>weight;
    cout<<"enter age";
    cin>>age;

    hatSize=fun_hatSize(height,weight);
    jacketSize=fun_jacketSize(height,weight,age);
    waistSize=fun_waistSize(weight,age);

    cout<<"hat Size:"<<hatSize<<endl;
    cout<<"jacket size:"<<jacketSize<<endl;
    cout<<"waist size:"<<waistSize<<endl;
    return 0;
}
double fun_hatSize(double height,double weight)
{
    return weight/height*2.9;
}
double fun_jacketSize(double height,double weight, int age)
{
    if(age<40)
    {
        return ((weight*height)/288);
    }
    else
    {
        age=age/10-3;
        return ((weight/height)/288)+(age/8);
    }
}    
double fun_waistSize(double weight,int age)
{
        if(age<30)
        {
            return (weight/5.7);
        }
        else
        {
            age=age/2-14;
            return (weight/5.7+age*0.1);
        }
}
        
    

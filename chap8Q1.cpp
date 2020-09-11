/*Write a program that reads a person’s name in the following format: first name, then middle name or initial, and then last name. 
program then outputs the name in the following format:

lastName, firstName Middle_Initial.
For example, the input
Mary Average User

should produce the output:
User, Mary A.

The input
Mary A. User

should also produce the output:
User, Mary A.

Your program should work the same and place a period after the middle initial even if the input did not contain a period. 
Your program should allow for users who give no middle name or middle initial. In that case, the output, of course, contains 
no middle name or initial. For example, the input

Mary User
should produce the output

User, Mary*/




#include <iostream>
#include<Math.h>
using namespace std;

int main()
{
    char Fname[10];
    char midName[10];
    char Lname[10];

    cout<<"enter first name"<<endl;
    cin>>Fname;
    getchar();
    cout<<"enter middle name"<<endl;
    int i=0;
    while((midName[i]=getchar())!='\n')
    i++;
    midName[i]='\0';
    

    cout<<"enter last name"<<endl;
    cin>>Lname;
    cout<<endl;
    if(midName[0]!='\0')
    {
        cout<<Lname<<" "<<Fname<<" "<<midName[0]<<"."<<endl;
    }
    else
    {
      cout<<Lname<<","<<Fname;  
    }
    return 0;
}
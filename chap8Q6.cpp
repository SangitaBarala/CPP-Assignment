/*Write a program that reads in a line of text and outputs the line with all the digits in all integer numbers replaced with 'x'.
 For example,

Input:
My userID is john17 and my 4 digit pin is 1234 which is secret.

Output:
My userID is john17 and my x digit pin is xxxx which is secret.*/


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string line;
    cout<<"enter a line"<<endl;
    getline(cin,line);
     int prev=0;
     for(int i=0; i<line.length(); i++)
     {
         if(line[i]==' ' || i+1==line.length())
         {
             int j;
             for(j=prev; j<i; j++)
             {
                 if(line[j]<='0' || line[j]>='9')
                 break;
             }
             if(j==i)
             {
                 for(j=prev; j<i; j++)
                 {
                     line[j]='x';
                 }
             }
             prev=i+1;
         }
     }
     cout<<"line after replacing the digit is:"<<endl<<line<<endl;
     return 0;
}
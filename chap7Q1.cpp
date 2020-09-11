/* Write a program to calculate the standard deviation of N numbers. The standard deviation of a list of numbers is a measure of how 
much the numbers deviate from the average. If the standard deviation is small, the numbers are clustered close to the average. If the 
standard deviation is large, the numbers are scattered far from the average.*/

#include<iostream>
#include<cmath>

using namespace std;
double stdDeviation(double num[],int n);
int main()
    {
        double num[100];
        double mean,sDev;
        int i,n;
        cout<<"enter the size of array";
        cin>>n;
        cout<<"enter values";
        for(int i=0; i<n; i++)
        cin>>num[i];
        sDev=stdDeviation(num,n);
        cout<<"standard deviation value:"<<sDev<<endl;
        return 0;
    }
    double stdDeviation(double num[],int n)
    {
        double sd=0;
        double avg=0;
        for(int i=0; i<n; i++)
        avg=avg+num[i];
        avg=avg/n;
        for(int i=0; i<n; i++)
        sd=sd+pow((num[i]-avg),2);
        sd=sd/n;
        sd=sqrt(sd);
        return sd;
    }

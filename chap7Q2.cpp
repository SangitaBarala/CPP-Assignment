/*Write a function and a test program to implement the selection sort. */

#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,size,arr[50];
    cout<<"enter array size";
    cin>>size;
    cout<<"enter number of elements";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"array after sorting:";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*sort the array elements in ascending order*/


#include<iostream>
using namespace std;
void sort()
{
    int arr[50],i,j,n,temp;

    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"elements in ascending order:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"  "<<arr[i];
    }
}
int main()
{
    sort();
}
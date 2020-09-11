#include <iostream>
using namespace std;
int main()
{
    //chapter 2:Q9
    //Write a program that reads in ten whole numbers and that outputs the sum of all the numbers greater than zero, the sum of all
    //the numbers less than zero (which will be a negative number or zero), and the sum of all the numbers, whether positive, negative, or zero.
    //The user enters the ten numbers just once each and the user can enter them in any order. Your program should not ask the user to enter the positive numbers and the negative numbers separately.
    
    // chapter 2:Q10
    //Modify your program from Programming Project 9 so that it outputs the sum of all positive numbers, the average of all positive numbers,
    //the sum of all nonpositive numbers, the average of all nonpositive numbers, the sum of all positive and nonpositive numbers, and the 
    //average of all numbers entered.

    int numbers, negSum = 0, posSum = 0, sum = 0;
    float average=0, avg_Neg=0, avg_Pos=0;
    int count = 0, negCount = 0, posCount = 0;
    cout << "enter any 10 numbers";
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers;
        if (numbers >= 0)
        {
            cout << "positive numbers";
            posSum += numbers;
            posCount++;
            count++;
        }
        else
        {
            cout << "negative numbers";
            negSum += numbers;
            negCount++;
            count++;
        }
    }
    if (posCount > 0)
    {
        avg_Pos = posSum / posCount;
    }
    if (negCount > 0)
    {
        avg_Neg = negSum / negCount;
    }
    sum = posSum + negSum;
    if (count>0)
    {
        average = sum / count;
    }
    cout<<endl;
    cout <<"sum of positive numbers:"<<" "<<posSum<<endl;
    cout << "average of positive numbers:" << " " << avg_Pos << endl;
    cout << "sum of negative numbers:" << " " << negSum << endl;
    cout << "average of negative numbers:" << " " << avg_Neg << endl;
    cout << "sum of all numbers:" << " " << sum << endl;
    cout << "average of all numbers:" << " " << average << endl;

    return 0;
}


#include <iostream>
#include<Math.h>
using namespace std;
int main()
{
	// chapter1:Q4
	//Write a program that allows the user to enter a time in seconds and then outputs how far an object would drop if it is in 
	//freefall for that length of time.Assume that the object starts at rest, there is no friction or resistance from air, 
	//and there is a constant acceleration of 32 feet per second due to gravity.

	double acceleration = 32;
	double time;
	cout<<"Enter time in seconds";
	cin>>time;
	double PowTime = pow(time,2);
	double distance = (acceleration * PowTime) / 2;
	cout<<"an objecct in freefall for "<<time<<" "<<"seconds will fall " << distance <<" "<< "feet" << endl;
	return 0;
}


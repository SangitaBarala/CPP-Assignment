#include <iostream>
using namespace std;
int main()
{
	// chapter 2, Q3
	//Write a program that allows the user to enter a number of quarters, dimes, and nickels and then outputs
	//the monetary value of the coins in cents. For example, if the user enters 2 for the number of quarters, 
	//3 for the number of dimes, and 1 for the number of nickels, then the program should output that the coins are worth 85 cents.


	int cents, quarters, dimes, nickles;

	cout<<"Enter number of quarters";
	cin >> quarters;

	cout << "Enter number of dimes";
	cin >> dimes;

	cout << "Enter number of nickles";
	cin >> nickles;

	cents = quarters * 25 + dimes * 10 + nickles * 5;
	cout << "Total cents : " << cents << endl;

	if (cents > 85)
	{
		cout << "coins are worth 85 cents";
	}
	else 
    {
		cout << "coins are not worth 85 cents";
	}
}
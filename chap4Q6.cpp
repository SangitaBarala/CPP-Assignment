/*You have invented a vending machine capable of deep frying twinkies. Write a program to simulate the vending machine. It costs $3.50
to buy a deep-fried twinkie, and the machine only takes coins in denominations of a dollar, quarter, dime, or nickel. Write code to 
simulate a person putting money into the vending machine by repeatedly prompting the user for the next coin to be inserted. Output 
the total entered so far when each coin is inserted. When $3.50 or more is added, the program should output “Enjoy your deep-fried
twinkie” along with any change that should be returned. Use top-down design to determine appropriate functions for the program.
*/

#include<iostream>
using namespace std;

int main()
{
    bool paidAmount=false;
    double totalPaid=0.00;
    while(paidAmount==false)
    {
        char userInput;
        cout<<"please insert coin to buy your twinkie.Twinkie price is $"<<3.50-totalPaid<<"-";
        cin>>userInput;
        if(userInput=='D')
        {
            totalPaid=totalPaid+1;
        }
        else if(userInput=='q')
        {
            totalPaid=totalPaid+0.25;
        }
        else if(userInput=='d')
        {
            totalPaid=totalPaid+0.10;
        }
        else if(userInput=='n')
        {
            totalPaid=totalPaid+0.05;
        }
        else
        {
            cout<<"invalid input";
        }
        if(totalPaid>=3.50)
        {
            paidAmount=true;
        }
        
    }
    cout<<"Thanx for paying. Enjoy your Twinkie :)"<<endl;
    cout<<"Your change is:"<<totalPaid-3.50;

    cout<<endl;
    return 0;
}



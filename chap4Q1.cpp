/*Write a program that computes the annual after-tax cost of a new house for the first year of ownership. The cost is computed 
as the annual mortgage cost minus the tax savings. The input should be the price of the house and the down payment. The annual 
mortgage cost can be estimated as 3 percent of the initial loan balance credited toward paying off the loan principal plus 6 percent 
of the initial loan balance in interest. The initial loan balance is the price minus the down payment. Assume a 35 percent marginal 
tax rate and assume that interest payments are tax deductible. So, the tax savings is 35 percent of the interest payment. Your program 
should use at least two function definitions and should allow the user to repeat this calculation as often as the user wishes.
*/

#include<iostream>
#include<cmath>
using namespace std;

double annualMortgage(double initialBalance);
double initialLoanBalance(double houseCost, double downPayment);
double taxSaving(double initialBalance);

int main()
{
    double houseCost,downPayment,initialBalance;
    char choice;
    do
    {
        cout<<"enter cost of the house";
        cin>>houseCost;
        cout<<"enter down payment of house";
        cin>>downPayment;

        initialBalance=initialLoanBalance(houseCost,downPayment);
        cout<<"annual after-tax cost of house"<<annualMortgage(initialBalance)-taxSaving(initialBalance)<<endl;
        cout<<"initial balance of loan"<<initialBalance<<endl;
        cout<<"annual mortgage"<<annualMortgage(initialBalance)<<endl;
        cout<<"tax saving is $"<<taxSaving(initialBalance)<<endl;
        cout<<"do you Want to calculate again:(y/n)";
        cin>>choice;
    }
        while(choice=='y' || choice=='Y');
        return 0;
}


    double annualMortgage(double initialLoanBalance)
    {
        double cost;
        cost=initialLoanBalance*(.09); //3% credited toward paying off the loan principal and 6% interest
        return cost;
    }

    double taxSaving(double initialLoanBalance)
    {
        double taxSaving;
        taxSaving=initialLoanBalance*0.021; //35% of a 6% interest payment
        return taxSaving;
    }

    double initialLoanBalance(double houseCost, double downPayment)
    {
    double initialLoanBalance;
    initialLoanBalance=houseCost-downPayment;
    return initialLoanBalance;
    }

    

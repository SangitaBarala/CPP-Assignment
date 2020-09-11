/*Holy digits Batman! The Riddler is planning his next caper somewhere on Pennsylvania Avenue. In his usual sporting fashion, 
he has left the address in the form of a puzzle. The address on Pennsylvania is a four-digit number where:

All four digits are different
The digit in the thousands place is three times the digit in the tens place
The number is odd
The sum of the digits is 27

Write a program that uses a loop (or loops) to find the address where the Riddler plans to strike.*/


#include <iostream>
using namespace std;
int main()
{
    int num;

    for (num = 1001; num <= 9999; num += 2)
    {
        int num1 = num / 1000 % 10;
        int num2 = num / 100 % 10;
        int num3 = num / 10 % 10;
        int num4 = num % 10;
        if (num2 != (num3 * 3))
        {
            continue;
        }
        if (num1 != num2 && num1 != num3 && num1 != num4 && num2 != num3 && num2 != num4 && num3 != num4)
        {
            if ((num1+num2+num3+num4)==27)
            {
                cout << "address of avenue is:" << num << endl;
            }
        }
    }
    return 0;
}

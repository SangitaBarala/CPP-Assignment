/* Write a function that returns the windchill index. Your code should ensure that the restriction on the temperature is not violated.
In cold weather, meteorologists report an index called the windchill factor, that takes into account the wind speed and the temperature. The index provides a measure of the chilling effect of wind at a given air temperature. Windchill may be approximated by the formula:
W=13.23+0.6215*t-11.37*v(pow(0.16))+0.3965*t*v(pow(0.16))
v = wind speed in m/sec
t = temperature in degrees Celsius: t <= 10
W = windchill index (in degrees Celsius)*/

#include <iostream>
#include<iomanip>
#include<Math.h>
using namespace std;

int main()
{
    double windSpeed,temp,wchill;
    cout<<"enter wind speed(m/sec):"<<endl;
    cin>>windSpeed;
    cout<<"enter temperature (cels):"<<endl;
    cin>>temp;
    if(temp<=10)
    {
        wchill=13.12+0.6215*temp-11.37*pow(windSpeed, 0.16)+0.3965*temp*pow(windSpeed, 0.16);
        cout<<"chill index of wind is:"<<setprecision(3)<<wchill<<endl;
    }
    else
    {
        cout<<"restricted temperature...enter temperature less than 10."<<endl;
        cout<<"Thank You!!!";
    }
    
  
    return 0;
}
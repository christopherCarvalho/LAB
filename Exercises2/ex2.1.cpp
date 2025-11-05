//Celsius to farenheit

#include <iostream>
using namespace std;

float celsiusToFahrenheit(int);

int main(){
    cout << "Enter value in Celsius to converter in Farenheit: "<< endl;
    int celsius;
    cin >> celsius;

    cout << celsius << "C ,"<< " converted is: " << celsiusToFahrenheit(celsius) << "F" << endl;
    return 0;
}

float celsiusToFahrenheit(int celsius){

    return ((9.0/5) * celsius) +32;
}
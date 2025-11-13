//Wind-Chill temperature
#include <iostream>
#include <cmath>
using namespace std;

float windChillTemperature(float temperature, float windSpeed);

int main(){
    float temperature, windSpeed = 0;
    cout << "Enter the temperature em Farenheit: " << endl;
    cin >> temperature;
    cout << "Enter the wind speed in miles per hour: " << endl;
    cin >> windSpeed;
    
    cout << "The wind chill index is: " << windChillTemperature(temperature, windSpeed) << endl;

    return 0;
}

float windChillTemperature(float temperature, float windSpeed){

    return 35.74 + (0.6215 * temperature) - (35.75 * (pow(windSpeed,0.16))) + (0.4275 * temperature * (pow(windSpeed, 0.16)));
}


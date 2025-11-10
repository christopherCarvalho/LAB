//Science: calculating energy
#include <iostream>
#include <iomanip>
using namespace std;

float calculateEnergy(float ammountWater, float finalTemperature, float initialTemperatue);

int main() {
    float ammount, finalTemp, initialTemp;
    cout << "Enter the ammount of water em Kilograms: "<<endl;
    cin>> ammount ;
    cout << "Enter the initial temperature: " << endl;
    cin>> initialTemp;
    cout<< "Enter final temperature: " << endl;
    cin >> finalTemp;
    cout << fixed << setprecision(1) << "The energy needed is: " << calculateEnergy(ammount, finalTemp, initialTemp) << endl;

    return 0;
}

float calculateEnergy(float ammountWater, float finalTemperature, float initialTemprature){
    return ammountWater *(finalTemperature - initialTemprature) * 4184;
}
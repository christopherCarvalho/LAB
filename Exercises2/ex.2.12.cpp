//finding runway length
#include <iostream>
#include <cmath>
using namespace std;

 float runwayLength(float velocity, float acceleration);

int main (){
    float speed, acceleration = 0;
    cout << "Enter speed and accelaration: " << endl;
    cin >> speed >> acceleration;

    cout << "The minimum runway length for this airplane is: " << runwayLength(speed, acceleration) << endl;

    return 0;
}

float runwayLength(float velocity, float acceleration){

    return pow(velocity,2)/ (2* acceleration);
}
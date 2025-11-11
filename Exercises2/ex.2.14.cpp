//Health application
#include <iostream>
#include <cmath>
using namespace std;

float bodyMassIndex(float pounds, float height);

int main(){
    float pounds, height = 0;
    cout << "Enter weight in pounds: " << endl;
    cin >> pounds;
    cout << "Enter height in inch: " << endl;
    cin >> height;

    cout << "BMI is: " << bodyMassIndex(pounds, height) << endl;

    return 0;
}


float bodyMassIndex(float pounds, float height){
    float kilograms = pounds * 0.45359237;
    float inch = height * 0.0254;

    return kilograms /pow(inch,2);
}


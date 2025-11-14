//cost of driving
#include<iostream>
#include<iomanip>
using namespace std;

float costOfDriving(float distance, float performance, float fuelPrice);

int main(){ 
    float distance, performance, price;
    cout << "Enter the driving distance: " << endl;
    cin >> distance;
    cout << "Enter miles per gallon: " << endl;
    cin >> performance;
    cout << "Enter price per gallon: " << endl;
    cin >> price;

    cout << fixed << setprecision(2) << "The cost of driving is: R$" << costOfDriving(distance, performance, price) << endl;

    return 0;
}

float costOfDriving(float distance, float performance, float fuelPrice){
    return (distance/performance) * fuelPrice;
}

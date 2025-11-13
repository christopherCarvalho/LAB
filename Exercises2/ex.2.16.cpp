//Area of hexagon
#include <iostream>
#include <cmath>
using namespace std;

float areaHexagon(float value);

int main(){
    float side = 0;
    cout << "Enter the side: " << endl;
    cin >> side;
    cout << "The area of hexagon is: " << areaHexagon(side) << endl; 

    return 0;
}

float areaHexagon(float side){

    return (3*sqrt(3)/2)*pow(side,2);

}

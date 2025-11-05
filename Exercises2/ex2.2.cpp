//volume of a cylinder
#include <iostream>
#include <cmath>
using namespace std;

constexpr double PI = 3.14159;

float area(float);
float volume (float, float);

int main(){
    float radius, length;
    cout << "Enter the radius and length of a cylynder: "<< endl;
    cin >> radius >> length;

    cout << "The area is: " << area(radius) << endl;
    cout << "The volume is: " << volume(area(radius), length) << endl;

    return 0;
}

float area(float radius){
    return pow(radius,2) * PI;
}

float volume(float area, float length){
    return area * length;
}
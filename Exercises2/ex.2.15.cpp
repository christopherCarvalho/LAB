//distance of two points
#include <iostream>
#include <cmath>
using namespace std;

float distanceTwoPoints(float a, float b, float c, float d);

int main(){
    float x1, y1, x2, y2;
    cout << "Enter x1 and y1: " << endl;
    cin >>  x1 >> y1;
    cout << "Enter x2 and y2: " << endl;
    cin >> x2 >> y2;

    cout << "The distance between the two points is: " << distanceTwoPoints(x1,x2, y1,y2) << endl;

    return 0;
}

float distanceTwoPoints(float a, float b, float c, float d){
    return sqrt(pow( b - a, 2)+ pow(d - c, 2));
}

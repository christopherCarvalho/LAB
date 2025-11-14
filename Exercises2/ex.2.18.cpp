//area of triangle
#include <iostream>
#include <cmath>
using namespace std;

float areaOfTriangle(float,float,float,float,float,float);

int main(){
    float x1,y1, x2,y2, x3,y3;
    cout << "Enter three points of a triangle: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "The area of a triangle is: " << areaOfTriangle(x1, y1, x2, y2, x3, y3) << endl;

    return 0;
}

float areaOfTriangle(float x1, float y1, float x2, float y2, float x3, float y3){
    return fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) /2;
}

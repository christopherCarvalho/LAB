//Slope a line
#include <iostream>
using namespace std;

float slopeALine(float, float, float, float);

int main(){
    float x1,y1,x2,y2;
    cout << "Enter the coordinates for two points: "<<endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "The slope for the line that connects two points " 
         <<"("<< x1 <<","<< y1 << ") and "
         <<"("<< x2 <<","<< y2 << ") is "
         << slopeALine(x1,y1,x2,y2);

    return 0;
}

float slopeALine(float x1, float y1, float x2, float y2){
    return (y2 - y1)/( x2 - x1);
}

//physics: acceleration
#include <iostream>
using namespace std;

float acceleration(float, float, float);

int main(){
    float v0,v1,time;
    cout << "Enter value velocity0, velocity1, time: " <<endl;
    cin >> v0 >> v1 >> time;

    cout << "The average accelaration is: " << acceleration(v0, v1, time) << endl;

    return 0;
}

float acceleration(float velocity0, float velocity1, float time){
    return (velocity1 - velocity0) / time;
}
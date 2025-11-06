//convert feet into meters, remember 1foot is 0.304 meters.
#include <iostream>
using namespace std;

float footInMeters(float);

int main(){
    float foot;
    cout << "Enter a value for feet: " << endl;
    cin >> foot;

    cout << foot << " feet is "<< footInMeters(foot) << " meters." << endl;

    return 0;
}

float footInMeters(float foot){
    return foot * 0.304;
}

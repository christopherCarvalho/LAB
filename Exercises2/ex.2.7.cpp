//number of years
#include <iostream>
using namespace std;

int numberOfDays(int);
int numberOfYears(int);

int main(){
    int minutes;
    cout << "Enter the number of minutes: " << endl;
    cin >> minutes;

    cout << minutes 
         << " minutes is aproximately: " 
         << numberOfYears(minutes) 
         <<" years and " 
         << numberOfDays(minutes) 
         << " days." << endl;

    return 0;
}

int numberOfDays(int minutes){
    return ((minutes/60) / 24)%365;      // resto da divisao   
}

int numberOfYears(int minutes){
    return  ((minutes/60) / 24)/365;
}
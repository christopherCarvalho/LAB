// average em kilograms
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double grocery = 5553.0;
    double hours, minutes, seconds, kilograms;

    cout << "Enter time: (hours, minutes, seconds) " << endl;
    cin >> hours >> minutes >> seconds;
   
    minutes += hours * 60;       //minutos em horas
    seconds += minutes * 60;     // segundos em minutos

    kilograms = (grocery/seconds);  //kilograma por segundo

    cout << fixed << setprecision(6) << "Media de kilograma por hora: " << kilograms << "Kg/s"<< endl;


    return 0;
}
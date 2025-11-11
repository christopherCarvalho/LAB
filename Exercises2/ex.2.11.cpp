#include <iostream>
#include <iomanip>
using namespace std;

double growInYears(int number);
double populationProjection(double seconds);

int main (){
    int year;

    cin >> year; 
    
    cout << "In " << year << " year(s) we have: "
         << fixed << setprecision(0)
         << populationProjection(growInYears(year)) << endl; 

    return 0;
}

double growInYears(int number){
    double days = number * 365;
    double hours = days * 24;
    double seconds = hours * 60.0 * 60.0;
    return seconds;
}

double populationProjection(double seconds){
    double initialPopulation = 312032486;
    double birth = seconds / 7.0;
    double death = seconds / 13.0;
    double immigrant = seconds / 45.0;

    return initialPopulation + birth - death + immigrant;
}

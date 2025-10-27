// population in years
#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int year, days;
    double  hours, seconds;
    double birth, death, immigrant;

    cin >> year;

    days = year * 365;

    hours = days * 24;

    seconds = hours*60.0*60.0;

    birth = seconds/7.0;

    death = seconds/13.0;

    immigrant = seconds/45.0;

    cout << " In " << fixed << setprecision(4) << year << " year(s) " << " we have: "<< birth << " births, " << death << " deaths and " << immigrant << " immigrants."<< endl; 


    


    return 0;
}
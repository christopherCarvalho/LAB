//Find future dates
#include <iostream>
using namespace std;

string futureDates(int);

int main(){
    int day = 0;
    int elapsedDays = 0;
    cout << "Enter today`s day: " << endl;
    cin >> day;
    cout << "Enter the number of days elapsed since today: "<< endl;
    cin >> elapsedDays;

    int futureDays = day + elapsedDays;

    cout << "Today is " << futureDates(day)
         << " and the future day is "
         << futureDates(futureDays)
         << endl;

    return 0;
}

string futureDates(int day){
    switch (day)
    {
    case 1:
       return "Sunday";
        break;
    case 2:
        return  "Monday";
        break;
    case 3:
       return  "Tuesday";
        break;
    case 4:
        return "Wednesday";
        break;
    case 5:
        return "Thursday";
        break;
    case 6:
        return "Friday";
        break;
    case 7:
        return  "Saturday";
        break;                        
    
    default:        
        break;
    }
}

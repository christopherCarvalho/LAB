//Display the day and remaining hours
#include <iostream>
using namespace std;

string day(int);
int hoursRemaining(int);

int main(){
    int dayNumber, hours = 0;
    cout << "Enter the day number of wee (1 - 7), and hours passed( 0 - 24): " << endl;
    cin >> dayNumber >> hours;

    cout << "Today is: "<< day(dayNumber) << " ,and Remaining hours is: " << hoursRemaining(hours) << endl;


    return 0;
}

string day(int day){
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

int hoursRemaining(int hours){
    return 24 - hours;
}

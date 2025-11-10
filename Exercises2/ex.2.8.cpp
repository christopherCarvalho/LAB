//current time
#include <iostream>
#include <ctime>
using namespace std;

int calculateSecondsGMT(int);
int calculateMinutesGMT(int);
int calculateHoursGMT(int, int);

int main (){
    int gmt = time(0);
    int time = 0;
    cin >>time;
    cout << "Current time is: "<< calculateHoursGMT(gmt, time)<<":" << calculateMinutesGMT(gmt)<<":" << calculateSecondsGMT(gmt)<<" GMT" << endl;

    return 0;
}

int calculateSecondsGMT( int gmt){
    int currentSeconds = gmt%60;    // resto da divisao por 60 - representando os segundos
    return currentSeconds;
}

int calculateMinutesGMT( int gmt){
    int totalMinutes = gmt/60;
    int currentMinutes = totalMinutes%60; // resto da divisao por 60 - representando os minutos
    return currentMinutes;
}

int calculateHoursGMT(int gmt, int time){
    int totalHours = (gmt/3600);
    int currentHours = totalHours%24; //resto da divisao por 24 - representando horas do dia
    return currentHours - time;
}
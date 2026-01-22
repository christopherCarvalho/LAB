//Game:Multiply quiz
#include <iostream>
#include <cstdLib>
#include <ctime>
using namespace std;

int main(){
    int min, max = 0;
    cout << "Enter two numbers to randomize betwenn them: " << endl;
    cout<< " Minimun first, then Maximmum" << endl;
    cin >> min >> max;

    srand(time(nullptr)); //seed based in real time

    int numberRandom = min + rand()% (max - min +1);

    cout << "The Number is: " << numberRandom << endl;


    return 0;
}
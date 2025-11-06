//Calcule tips, percentage
#include <iostream>
using namespace std;

float percentage(int,float);

int main(){
    int value;
    float percent;
    
    cout << "Enter value and percentage to apply: " << endl;
    cin >> value >> percent;

    cout<<"The final price is: R$" << percentage(value, percent) << endl;

    return 0;
}


float percentage(int value,float percent){
    return value + (value * (percent/100));
}
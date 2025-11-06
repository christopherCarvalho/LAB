//punds to kilogram, remember 1 pound is 0.454 kilograms
#include <iostream>
using namespace std;

float poundsInKilogram(float);

int main(){
    float pounds;
    cout << "Enter a number in pounds: " << endl;
    cin >> pounds;

    cout << pounds << " pounds is " << poundsInKilogram(pounds) << " Kilograms." << endl;

    return 0;
}

float poundsInKilogram(float pounds){

    return pounds * 0.454;
}
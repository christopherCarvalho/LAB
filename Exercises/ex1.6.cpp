//average sales in grams
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double grams, average;

    cin >> grams;

    average = grams/60;

    cout << fixed << setprecision(4) << average << " grams" << endl;
    
    return 0;
}
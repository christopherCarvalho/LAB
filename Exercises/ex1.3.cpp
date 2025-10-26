//aproximatte pi number
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float result1 = sqrtf(6 * (1.0 + 1/4 + 1/9 + 1/16 + 1/25));
    float result2 = sqrtf(6 * (1.0 + 1/4 + 1/9 + 1/16 + 1/25 + 1/36));

    cout << "The sqare root from number: " << "6 * (1.0 + 1/4 + 1/9 + 1/16 + 1/25)" << " is " << result1 << endl;
    cout << "The sqare root from number: " << "6 * (1.0 + 1/4 + 1/9 + 1/16 + 1/25 + 1/36)" << " is " << result2 << endl;


    return 0;
}
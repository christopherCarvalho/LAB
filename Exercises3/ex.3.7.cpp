// Sort three integers
#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if( b > c){
        int temp = b;
        b = c;
        c = temp;
    } 
    if( a > b){
        int temp = b;
        a = b;
        b = temp;
    }

    cout << a << " "<<  b << " "<<  c;

    return 0;
}
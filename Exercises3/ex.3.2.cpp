//Check integers
#include <iostream>
using namespace std;

int checkIntsDivisible(int, int);

int  main(){
    int a, b, result;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;

    result = checkIntsDivisible(a, b);

    if(result > 0){
        cout << a << " is divisible by " << b << endl;
    }
    else{
        cout << a << " is not divisible by " << b << endl;
    }
    return 0;
}


int checkIntsDivisible(int a, int b){
    return a/b;    
}
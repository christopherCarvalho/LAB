#include <iostream>
using namespace std;

float interestRate(float);

int main (){
    float loan = 0;
    cout << "Enter valor to Loan: " << endl;
    cin >> loan;

    cout <<"The interest rate about loan R$ "<< loan << " is: R$ " << interestRate(loan);

    return 0;
}


float interestRate(float a){
    
    if(a >= 10000 && a <= 50000){
        return a *(11.0 / 100.0);
    }
    else{
        return 0;
    }
}
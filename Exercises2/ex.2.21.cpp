//calculate interest
#include<iostream>
using namespace std;

float calculateInterest(float balance,float annualInterestRate);

int main(){
    float balance, interestRate;
    cout << "Enter balance and interest rate: " <<endl;
    cin >> balance >> interestRate;
    cout << "The interest is: " << calculateInterest(balance, interestRate) << endl;

    return 0;
}

float calculateInterest(float balance, float annualInterestRate){
    return balance * (annualInterestRate/1200);
}

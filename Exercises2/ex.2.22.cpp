//future investment value
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float futureInvestmentValue(float amount, float interestRate, int numberYears);

int main(){
    float amount, interestRate =0;
    int numberYears =0;
    cout << "Enter investment amount: " << endl;
    cin >> amount;
    cout << "Enter annual interest rate in percentage: " <<endl;
    cin >> interestRate;
    cout<< "Enter the number of years: " << endl;
    cin >> numberYears;

    cout << fixed << setprecision(2)<< "Accumulated value is: R$" << futureInvestmentValue(amount, interestRate, numberYears)<< endl;


    return 0;
}

float futureInvestmentValue(float amount, float interestRate, int numberYears){
    int months = numberYears * 12;
    float monthlyInterestRate = (interestRate/months)/100; // divide o valor de juros para cada mes e em seguida divide por 100 para obter o valor em decimal.

    return amount * pow(1 + monthlyInterestRate, months);
}

//financial apllication
#include <iostream>
#include <iomanip>
using namespace std;

float savingAccount(float value, int month);

int main(){
    float value = 0.0;
    int months = 0;
    cout << "Enter the montly saving amount: " << endl;
    cin >> value;
    cout << "Enter how many month you want save for: " << endl;
    cin >> months; 

    cout << fixed << setprecision(2) << "After the " << months << " month, the account value is: " << " R$" <<savingAccount(value, months) << endl; 

    return 0;
}

float savingAccount(float value, int months){
    int month = 0;  
    float balance = 0.0;
    float interestRate = (1 + ((5.0/100.0)/12.0));

    while( month < months){
        balance = (balance + value) * interestRate; //Deposito + valor fixo * juros, deve-se multiplicar o valor com juros. Por isso deposito(valor com juros) + valor(fixo)
               
        month ++;
    }

    return balance;
    
}
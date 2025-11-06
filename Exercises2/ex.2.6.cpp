//Sum number a number
#include <iostream>
using namespace std;

int sumANumber(int);

int main(){
    int number;
    cout<< "Enter a number: " << endl;
    cin >> number;

    cout << "The number: " << number << " the sum of digits are: " << sumANumber(number) << endl;

    return 0;
}

int sumANumber(int number){
    int sum = 0;    //inicializar a variavel

    while(number > 0){

        sum += number%10;
        number = number/10;
    }

    return sum; //retorno da variavel
}
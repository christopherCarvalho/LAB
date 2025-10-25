// sum of 10 numbers

#include <iostream>
using namespace std;

int main(){

    int A,B,C,D,E,F,G,H,I,J,X;                                      // variaveis para armazenar

    cout << "Entre com 10 numeros: ";                             //informativo par usuario

    cin >> A >> B >> C >> D >> E >> F >> G >> H >> I >> J;      // leitura de input
    X = A + B + C + D + E + F + G + H + I + J;                 // calculo e armazenamento

    // cout para informar o usuario
    cout << A << " + "<< B << " + "<< C << " + "<< D << " + "<< E << " + "<< F << " + "<< G << " + "<< H << " + "<< I << " + "<< J << " = " << X;   
    return 0;
}
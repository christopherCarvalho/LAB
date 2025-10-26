//area and perimeter of equivalent triangle
#include <iostream>
#include <cmath>    // biblioteca de conjuntos matematicos
#include <iomanip> // biblioteca de formatacao de casas decimais
using namespace std;

int main() {

    double side1, area, perimeter;
    
    cin >> side1;

    area = 1.732 * pow(side1,2.0); // pow, abreviacao de potencia e no caso recebe dois argumentos: valor e expoente.
    perimeter = 3 * side1;

    cout << "Area=" << fixed << setprecision(4) << area << " Perimeter="<< perimeter << endl;

    //fixed → força o formato decimal fixo (não científico, tipo 3.14 em vez de 3.14e+00).

    //setprecision(4) → define 4 casas após o ponto.
    
    return 0;
}
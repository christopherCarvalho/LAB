//area and perimeter of square
#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std;

int main(){
    double area, side, perimeter;

    cin >> side;

    area = pow(side,2);
    perimeter = 4 * side;

    cout << "Area= " << fixed << setprecision(4) << area << " Perimeter= " << perimeter << endl;

    return 0;
}
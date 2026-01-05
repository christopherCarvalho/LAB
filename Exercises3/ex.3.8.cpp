// Compare integers
#include <iostream>
using namespace std;

string compareInts(int, int, int);

int main()
{   int a, b, c = 0;
    cout << "Enter with value of traingle for A, B and C: ";
    cin >> a >>  b >> c;

   cout <<  compareInts(a, b ,c);

    return 0;
}

string compareInts(int a, int b, int c)
{

    if (a == b && a == c && b == c)
    {
        return "Equilateral Triangle";
    }
    else if (
        (a == b && a != c) ||
        (a == c && a != b) ||
        (b == c && b != a))
    {
        return "Isosceles Triangle";
    }
    else{
        return "Scalene Triangle";
    }
}
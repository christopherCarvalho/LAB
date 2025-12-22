// Algebra: solve the quadratic equations

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float delta(float, float, float);
float rootPositive(float, float, float);
float rootNegative(int, int, float);

int main()
{
    float a, b, c, r1, r2;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;

    int d = delta(a, b, c);

    if (d > 0)
    {
        r1 = rootPositive(a, b, delta(a, b, c));
        r2 = rootNegative(a, b, delta(a, b, c));
        cout << "The roots are: " << r1 << " and " << r2 << endl;
    }
    else if (d == 0)
    {
        r1 = rootPositive(a, b, delta(a, b, c));
        cout << "The roots are: " << r1 << " and " << r2 << endl;
    }
    else
    {
        cout << "The equation has no real roots" << endl;
    }

    return 0;
}

float delta(float a, float b, float c)
{
    return pow(b, 2) - (4 * a * c);
}

float rootPositive(float a, float b, float delta)
{
    return (-b + sqrt(delta)) / (2 * a);
}

float rootNegative(int a, int b, float delta)
{
    return (-b - sqrt(delta)) / (2 * a);
}

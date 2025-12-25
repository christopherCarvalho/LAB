#include <iostream>
#include <iomanip>
using namespace std;

double cramerRuleInX(double, double, double, double, double, double);
double cramerRuleInY(double, double, double, double, double, double);

int main()
{
    double a, b, c, d, e, f;
    cout << "Enter a, b, c, d, e,f: " << endl;
    cin >> a >> b >> c >> d >> e >> f;

    double quotient = (a * d - b * c);
   
    if (quotient == 0)
    {
        cout << "The equation has no solution" << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << "x is : " << cramerRuleInX(a, b, c, d, e, f) << "and y is: " << cramerRuleInY(a, b, c, d, e, f) << endl;
    }

    return 0;
}

double cramerRuleInX(double a, double b, double c, double d, double e, double f)
{
    return (e * d - b * f) / (a * d - b * c);
}

double cramerRuleInY(double a, double b, double c, double d, double e, double f)
{
    return (a * f - e * c) / (a * d - b * c);
}

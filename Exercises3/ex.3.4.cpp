// Check the speed
#include <iostream>
using namespace std;

void checkVelocity(int);

int main()
{
    int velocity = 0;
    cout << "Enter velocity: " << endl;
    cin >> velocity;

    checkVelocity(velocity);

    return 0;
}

void checkVelocity(int velocity)
{
    if (velocity <= 20)
    {
        cout << "TooSlow" << endl;
    }
    else if (velocity > 80)
    {
        cout << "Too fast" << endl;
    }
    else
    {
        cout << "Just right" << endl;
    }
}

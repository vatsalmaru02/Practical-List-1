#include <iostream>

using namespace std;

double power(double base, int exponent) 
{
    if (exponent == 0)
        return 1.0;

    double result = 1.0;
    bool negativeExponent = false;

    if (exponent < 0) 
	{
        negativeExponent = true;
        exponent = -exponent;
    }

    while (exponent > 0) 
	{
        if (exponent % 2 == 1) 
		{
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    return negativeExponent ? 1.0 / result : result;
}

int main() 
{
    double base;
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num)
 {
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        ++count;
    }
    return count;
}

bool isArmstrong(int num)
 {
    int originalNum = num;
    int n = countDigits(num);
    int sum = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return originalNum == sum;
}

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) 
    {
        cout << number << " is an Armstrong number." << endl;
    } 
    else 
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}


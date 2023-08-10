#include <iostream>
using namespace std;


int sumOfNaturalNumbers(int n)
 {
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 1;
    }

    int result = sumOfNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;

    return 0;
}


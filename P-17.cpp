#include <iostream>

int fibonacci(int n) 
{
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int prev = 0;
    int current = 1;

    for (int i = 2; i <= n; ++i) 
	{
        int next = prev + current;
        prev = current;
        current = next;
    }

    return current;
}

int main() 
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}


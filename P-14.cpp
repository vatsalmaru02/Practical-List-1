#include <iostream>
using namespace std;

bool isPalindrome(int num)

{
    int originalNum = num;
    int reverseNum = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reverseNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) 
    {
        cout << number << " is a palindrome number." << endl;
    } 
    else 
    {
        cout << number << " is not a palindrome number." << endl;
    }

    return 0;
}


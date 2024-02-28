// write a program for pallindrome number pallindrome no is a number in which is same as backward and forward
#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int original = n;
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return original == reversed;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (palindrome(num))
    {
        cout << "Number is a palindrome." << endl;
    }
    else
    {
        cout << "Number is not a palindrome." << endl;
    }

    return 0;
}



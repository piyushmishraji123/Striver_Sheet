
// /write a progam to find that the given no is ARMSTRONG no. or not
#include <iostream>
using namespace std;
bool ArmStrongno(int n)
{
    int sum = 0;
    int orignalno = n;
    int lastdigit;
    while (n != 0)
    {
        lastdigit = n % 10;
        sum = sum +lastdigit * lastdigit * lastdigit;
        n=n/10;
    }
    return sum == orignalno;
}

int main()
{
    int n;
    cout << "enter no:";
    cin >> n;

    if (ArmStrongno(n))
    {
        cout << n << " "
             << "no. is armstrong no.";
    }
    else
    {
        cout << "not armstrong no";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int num;
    cout<<"Enter the number to check:";
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "Not a prime num";
    }
    int count = 0;
    for (int i = 2; i < num ; i++)
    {
        if(num%i ==0)
        {
            count++;
        }
     
    }
       if(count==0)
        {
            cout<<"num is prime";
        }
        else{
            cout<<"num is not prime";
        }
}
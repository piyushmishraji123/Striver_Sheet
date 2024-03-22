
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

// void prime(int n)
// {
//     int count =0 ;

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
    
//     if (count == 2)
//     {
//         cout << "prime no";
//     }
//     else
//     {
//         cout << "no prime";
//     }
    
// }

// more effctive way and time complexity reduced

bool isPrime(int n)
{
	if(n==0 || n==1)
	   return false;
	   
    for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		  return false;
	}
	return true;
}
int main()
{  int count;
    int n;
    cout << "enter the number to check";
    cin >> n;
    cout<<isPrime(n);
    //  prime(n);

}
#include<iostream>
using namespace std;
int  GCD(int num1,int num2){  
    for (int  i = min(num1,num2); i>=1; i--)

if(num1%i==0 && num2%i==0)
{
    cout<<i;
    break;
}
}
int main()
{   
    int num1;
    cout<<"enter the  first number";    
    cin>>num1;
    int num2;
    cout<<"enter the  second number";
    cin>>num2;
    GCD(num1,num2);
}
// optimise this by using eucludien algorithm gcd(a,b) = gcd(b,a%b)

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a = 4, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
}


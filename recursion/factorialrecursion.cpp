// normally 
// #include<bits/stdc++.h>
// using namespace std;
// int Factorial(int n)
// {int factorial=1;
//  for (int i = 1; i <=n; i++)
//  {
//  factorial=n*(n-1);
//  }
//  cout<<factorial;
 
// }
// int main()
// {   
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     Factorial(n);

// }
// by recursion
#include<bits/stdc++.h>
using namespace std;
int Factorial(int n)
{ //base case
  if(n==1 || n==0)
  {
    return 1;
  }
  else{
    return n*Factorial(n-1);
  }
 
}
int main()
{   
    int n;
    cout<<"enter the number";
    cin>>n;
    Factorial(n);

}

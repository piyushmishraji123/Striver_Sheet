//recursion defination--> it is a phenomena when a function calls itself infinitely until a specified condition is fullfiled.
// stack overflow recursion-->Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion of the recursive function. A recursive function can only be completed if a base condition is fulfilled and the control returns to the parent function.
//Base Condition-->It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely. After encountering the base condition, the function terminates and returns back to its parent function simultaneously. 
#include<iostream>
using namespace std;
int ReverseNum(int n)
    {
      if(n==0)
      {
      return 0;//base condition acheived
      }
      cout<<n<<" ";
      ReverseNum(n-1);//  recrusive function call

    }
int main()
{
     int n;
     cout<<"enter the number";
     cin>>n;
     ReverseNum(n);
    
}
//program to print the fibonacci series using bruteforce approach
// #include<iostream>
// using namespace std;

// int main()
// {
//  int num1=0,num2=1,num3,number;
//  cout<<"enter the no. of elements ";
//  cin>>number;
//  cout<<num1<<" "<<num2;
//  for (int i = 2; i < number; i++)
//  {
//     num3=num1+num2;
//     cout<<num3<<" ";
//     num1=num2;
//     num2=num3;
//  }
 

// return 0;
// }
//same question using recursion
#include<iostream>
using namespace std;
int fibonacciSeries(int num)
{if(num<=1)
{
return num;
}
int last = fibonacciSeries(num-1);
int secondlast=fibonacciSeries(num-2);
return last+secondlast;

    
}
int main()
{ int num;
 cin>>num;
 fibonacciSeries(num);
 
    for (int i = 0; i < num; i++) {
        int fib = fibonacciSeries(i);
        cout << fib << " ";
    }
return 0;
    
}

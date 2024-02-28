#include<iostream>
using namespace std;
void printInc(int n)
{   
  if(n==0)
  {return ;}
    cout<<n<<" ";
  printInc(n-1);
  cout<<n<<" ";
  
 
  
}
int main()
{ int n;
cout<<"enter the number";
cin>>n;
printInc(n);
     
}
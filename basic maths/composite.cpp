#include <iostream>

using namespace std;

int main()
{   int n,count=0;
     cin>>n;
     
     for(int i=2;i<=n/2;i++)
     { 
       if(n%i==0)
       {
           count++;
           break;
       }
         
     }
     if(count>0)
     {
         cout<<"composite no.";
     }
     else
     {
         cout<<"prime no";
     }

    return 0;
}

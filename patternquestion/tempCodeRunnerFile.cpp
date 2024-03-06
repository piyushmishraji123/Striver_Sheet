#include<bits/stdc++.h>
using namespace std;
int main()
{       int N;
        cin>>N;//5
        for (int  i = 0; i < N; i++)
        {
              for (int j = 0; i < N-i-1; j++)
              {
                cout<<" "; 
              }
                for (int  j = 0; i < 2*i+1; j++)
                {
                        cout<<"*";
                }
                for (int j = 0; i < N-i-1; j++)
              {
                cout<<" "; 
              }
        }
        
}
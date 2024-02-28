//coding ninjs solution by monika ji
#include <bits/stdc++.h>
using namespace std;
vector<long long> factorialNumbers(long long n) {
    vector<long long>arr;
    long long fac = 1;
    for(long long i=1;i<=n;i++){
        fac=fac*i;
        if(fac <= n){
            arr.push_back(fac);
        }
        else{
            break;
        }
    }
    return arr;
}
int mian ()
{    int n;
  
    cin >> n;
    vector<long long> factorialNums = factorialNumbers(n); 
    for (long long num: factorialNums)
    {
        cout<<num<<endl;
   }
   cout<<endl;
   return 0;
}
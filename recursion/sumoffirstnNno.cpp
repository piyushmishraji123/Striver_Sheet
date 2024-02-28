//brute force 
#include<bits/stdc++.h>
using namespace std;
 void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
  }
//   functional method
#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 0;
   }

   // Problem broken down into 2 parts and then combined.
   return n + func(n-1);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  cout<<func(n)<<endl;
  return 0;

}


//most optimal method of printing sum of first natural number
long long sumFirstN(long long n) {
    return (n * (n + 1)) / 2;
}

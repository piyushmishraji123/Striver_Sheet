// // bruteforce method of doing it
// #include <iostream>
// using namespace std;
// void PrintDivisor(int n)

// {
    
//   for (int i = 1; i < n; i++)
//   {
//      if (n%i==0)
//      {
//         cout<<i<<" ";
//      }
//   }
// }

// int main()
// {   
//     int n;
//     cout<<"enter the number";

//     cin>>n;
    
//     PrintDivisor(n);

// }
// Time Complexity: O(n), because the loop has to run from 1 to n always.// SAMEPROGRAM IN N/2 COMPLEXITY USING THE   SQRT


#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

void printDivisorsOptimal(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

int main(){
	printDivisorsOptimal(36);
        return 0;
}


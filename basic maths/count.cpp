// Problem Statement: Given an integer N, write a program to count the number of digits in N.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int X = 1234567;
//     int count = 0;
//     int n = X;

//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }

//     cout << count;

//     return 0;
// }


// same program using function
// #include <bits/stdc++.h>
// using namespace std;
// int count_digit(int n)
// {
//     int x=n;
//     int count=0;
//     while (x!=0)
//     {
//         x=x/10;
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the number of digits in a"<<" " <<n<<"is"<<"-->"<<count_digit(n);
//     return 0;

// }


// secod solution by converting integer into string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=1234;
//     string s =to_string(n);
//     cout<<s.length();
// }


// code byy striver copy pasted didnt understand
// #include<bits/stdc++.h>

// #include<bits/stdc++.h>

// using namespace std;

// int count_digits( int n )
// {
//   int digits = floor(log10(n) + 1);
//   return digits;
// }

// int main()
// {
//    int n = 12345;
//    cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
//    return 0;
// }

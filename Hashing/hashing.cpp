// //brute force approach for hashing
// //https://takeuforward.org/wp-content/uploads/2023/01/Screenshot-2023-01-28-183537.png
#include <iostream>

using namespace std;

int f(int number, int a[], int size)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == number)
            cnt++;
    }
    return cnt;
}

int main()
{
    int number;
    cin>>number;
    int a[] = {1, 2, 2, 3, 4};
    int size = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    int count = f(number, a, size);
    cout << "The number " << number << " appears " << count << " times in the array." << endl;

    return 0;
}
// this one is done using hashing

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i <n; i++)
//     {
//         cin>>arr[i];

//     }
//     //precompute
//     int hash[13]={0};
//     for (int i = 0; i <n; i++)
//     {
//         hash[i]+=1;

//     }

//     int q;
//     cin>>q;
//     while (q--)
//     {
//      int number;
//      cin>>number;
//      //fetch
//      cout<<hash[number]<<endl;
//     }

//     return 0;

// }

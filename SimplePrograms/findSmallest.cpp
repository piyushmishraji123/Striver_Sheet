// #include<bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int>& arr)
// {
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }
// int main()
// {
//     vector<int> arr={10,4,7,23,21};
//     cout<<"The smallest number in an array is :"<<sortArr(arr);
//     return 0;

// }

//  using min variable
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int SmallestElement(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (min > arr[i])

        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = 5;
    int min = SmallestElement(arr, n);
    cout << "The smallest element in the array is: " << min << endl;
}
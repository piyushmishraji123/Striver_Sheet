#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main()
{
    vector<int> arr={10,4,7,23,21};
    cout<<"The largest number in an array is :"<<sortArr(arr);
    return 0;

}

//  using min variable
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// int LargestElement(int arr[], int n)
// {
//     int largest = arr[0];
//     for (int i = 1; i < n; i++)
//     {

//         if (largest < arr[i])

//         {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main()
// {
//     int arr[] = {2, 54, 1, 3, 0};
//     int n = 5;
//     int largest = LargestElement(arr, n);
//     cout << "The largest element in the array is: " << largest << endl;
// }
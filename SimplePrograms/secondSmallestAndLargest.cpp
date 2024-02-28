// // brute force approach
// #include <bits/stdc++.h>
// using namespace std;

// int sortArr2(vector<int> &arr2)
// {
//     sort(arr2.begin(), arr2.end());
//     return arr2[1];
// }
// int sortArr(vector<int> &arr)
// {
//     sort(arr.begin(), arr.end());
//     return arr[arr.size() - 2];
// }
// int main()
// {
//     vector<int> arr = {10, 4, 7, 23, 21};
//     vector<int> arr2 = {103, 423, 734, 23, 21};
//     cout << "The secondLargest number in an array is :" << sortArr(arr) <<endl;
//     cout << "The secondSmallest number in an array is :" << sortArr2(arr2) <<endl;
//     return 0;
// }
// one more way to write the same code
// #include <bits/stdc++.h>
// using namespace std;
// void getElements(int arr[],int n)
// {
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second largest is "<<large<<endl;
//     cout<<"Second Smallest is"<<small<<endl;

// }
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }
// another way to solve this same problem using intitution
// #include <iostream>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// int Smallest(int arr[], int n)
// {
//     int
//         small = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < small)
//         {
//             small = arr[i];
//         }
//     }

//     return small;
// }
// int secondSmallest(int arr[],int n)
// {
//     int smallest=Smallest(arr,n);
//     int secondSmallest=INT_MAX;
//     for (int  i = 0; i < n; i++)
//     {
//           if (arr[i] < secondSmallest && arr[i] > smallest)
//         {
//             secondSmallest=arr[i];
//         }
//     }
//     return secondSmallest;

// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " integers:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The smallest number in the array is: " << Smallest(arr, n) << endl;
//     cout << "The second smallest number in the array is: " << secondSmallest(arr, n) << endl;

//     return 0;
// }

// find the largest through the optimal approach
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    
    int arr[n]; 
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int secondLargestNumber = secondLargest(arr, n);
    cout << "The second largest number in the array is: " << secondLargestNumber << endl;
    
    return 0;
}
//optimal way to find the second smallest this is copy pasted because int max funda is not clear
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main() {
    vector<int> a = {10, 4, 7, 23, 21};
    int n = a.size();
    
    int second_smallest = secondSmallest(a, n);
    cout << "The second smallest number in the vector is: " << second_smallest << endl;

    return 0;
}

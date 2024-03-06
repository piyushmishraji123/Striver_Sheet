
// //brute force
// #include <iostream>
// using namespace std;

// int
// reverseArray (int arr[], int ans[], int n)
// {
//   for (int i = 0; i < n; i++)
// 	{
// 	  ans[i] = arr[n - i - 1];
// 	}
//   return 0;
// }

// int
// main ()
// {
//   int n;
//   cout<<"enter the size of an array";
//   cin>>n;

//   int arr[n];
//   cout<<"enter the elements of array";
//   for(int i=0;i<n;i++)

//   {
//      cin>>arr[i];
//   }

//   int ans[n];

//   reverseArray (arr, ans, n);

//   cout << "reverseArray:";
//   for (int i = 0; i < n; i++)
// 	{
// 	  cout << ans[i]<<" ";
// 	}
// }

// two pointers approcah
// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int n) {
//     int p1 = 0;
//     int p2 = n - 1;
//     while (p1 < p2) {
//         swap(arr[p1], arr[p2]);
//         p1++;
//         p2--;
//     }
//     cout << "The reversed array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n = 5;
//     int arr[] = {5, 4, 3, 2, 1};
//     reverseArray(arr, n);
//     return 0;
// }

//optimal
#include <iostream>
#include <algorithm> 
using namespace std;

void reverseArray(int arr[], int n) {
    reverse(arr, arr + n);
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

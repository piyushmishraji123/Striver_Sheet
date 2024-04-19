// #include <bits/stdc++.h>
// using namespace std;

// void insertion_sort(int arr[], int n) {
//     for (int i = 0; i <= n - 1; i++) {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j]) {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }

//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using insertion Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertion_sort(arr, n);
//     return 0;
// }
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {


    for (int i = 1; i < n; i++) { 
        int temp = arr[i];  
            
        int j = i - 1;
            
        
        while (j >= 0 && arr[j] > temp) { 
            arr[j + 1] = arr[j]; 
            j--; 
        }
        
        arr[j + 1] = temp; 
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

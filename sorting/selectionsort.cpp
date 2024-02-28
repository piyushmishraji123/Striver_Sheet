
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;//10 
        for (int j = i + 1; j < n; j++) { //10 12  14 13 54 
            if (arr[j] < arr[min]) {      // 0  1   2  3  4  
                min = j;                  // 
            }
        }

        // Swap the elements at 'i' and 'min'
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

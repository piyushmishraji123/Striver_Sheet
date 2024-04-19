#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true; 
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isArraySorted(arr, size)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is not sorted in ascending order." << endl;
    }

    return 0;
}

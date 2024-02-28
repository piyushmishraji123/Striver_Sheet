#include<iostream>
using namespace std;

void PrintArray(int arr[], int size, int index) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    PrintArray(arr, size, index + 1);
}

int main() {
    int arr[] = {12, 34, 45, 45, 6, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Printing the array through recursion: ";
    PrintArray(arr, size, 0);

    return 0;
}

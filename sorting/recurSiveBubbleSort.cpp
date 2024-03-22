#include <iostream>
using namespace std;
void recursiveBubbleSort(int arr[], int n) {
    // Base case
    if (n <= 1)
        return;

    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
    recursiveBubbleSort(arr, n - 1);
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using recursiveBubble sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    recursiveBubbleSort(arr, n);
    cout << "After Using recursiveBubble sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
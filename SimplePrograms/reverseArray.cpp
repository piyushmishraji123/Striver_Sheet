#include <iostream>
using namespace std;

void reverseArray(int arr[], int n, int ans[]) {
    for (int i = 0; i < n; i++) {
        ans[i] = arr[n - i - 1];
    }
}

int main() {
    int n = 5;
    int arr[] = {2, 4, 5, 6, 7};
    int ans[n]; 

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n, ans);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

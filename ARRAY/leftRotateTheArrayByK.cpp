#include <iostream>
#include <vector>

using namespace std;

void leftRotateArrayByK(vector<int>& arr, int n, int k) {
    // If k is greater than array size, take modulo to reduce it to a valid range
    k = k % n;
    
    vector<int> temp(k);
    
    // Copy the first k elements to the temporary array
    for (int i = 0; i < k; ++i) {
        temp[i] = arr[i];
    }
    
    // Shift remaining elements of arr to the left by k positions
    for (int i = k; i < n; ++i) {
        arr[i - k] = arr[i];
    }
    
    // Copy back the elements from temp to arr at the end
    for (int i = 0; i < k; ++i) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int n, k;
    cin >> n; 
    vector<int> arr(n);
    
    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cin >> k; // Input number of positions to rotate left
    
    // Call the left rotation function
    leftRotateArrayByK(arr, n, k);
    
    // Output the rotated array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

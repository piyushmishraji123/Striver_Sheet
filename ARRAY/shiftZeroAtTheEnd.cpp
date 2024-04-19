#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeroAtTheEnd(vector<int>& arr) {
    vector<int> result;
    int zeroCount = 0;

    // Move non-zero elements to the result vector
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            result.push_back(arr[i]);
        } else {
            zeroCount++;
        }
    }

    // Add zeros to the end of the result vector
    for (int i = 0; i < zeroCount; i++) {
        result.push_back(0);
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Move zeros to the end
    vector<int> resultedArr = moveZeroAtTheEnd(arr);

    // Output result
    for (int i = 0; i < n; ++i) {
        cout << resultedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

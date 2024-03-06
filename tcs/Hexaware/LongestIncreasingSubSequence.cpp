//brute force aproach 
#include<bits/stdc++.h>
using namespace std;

int solve(int n, int a[], int curr, int prev) {
    // Base case
    if (curr == n) {
        return 0;
    }
    
    // Include
    int take = 0;
    if (prev == -1 || a[curr] > a[prev])
        take = 1 + solve(n, a, curr + 1, curr);

    // Exclude
    int notTake = solve(n, a, curr + 1, prev);
    
    // Return the maximum of take and notTake
    return max(take, notTake);
}

int longestIncreasingSubsequence(int n, int a[]) {
    return solve(n, a, 0, -1);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Length of the longest increasing subsequence: " << longestIncreasingSubsequence(n, a) << endl;
    return 0;
}


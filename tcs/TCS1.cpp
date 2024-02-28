#include <bits/stdc++.h>
using namespace std;

int VariableNames(vector<int>& nums, int position) {
    int index = -1;
    int maximum = -1;
    int size = nums.size();
    for (int i = 0; i < size; i++) {
        if (maximum < nums[i]) {
            index = i;
            maximum = nums[i];
        }
    }
    if (index == position) return 0;
    nums[index] = -1;

    for (int i = 0; i < index; i++) {
        if (nums[i] > 0) nums[i]++;
    }

    return 1 + VariableNames(nums, position);
}

int main() {
    int t, n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums) cin >> i;
    int k;
    cin >> k;
    k--;
    cout << 1 + VariableNames(nums, k) << endl;
    return 0;
}

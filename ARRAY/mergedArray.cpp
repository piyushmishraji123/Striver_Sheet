// //using map
// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// vector<int> sortedArray(vector<int> a, vector<int> b)
// {   
//     map<int,int>frq;
//     vector<int>result;
//     for (int i = 0; i < a.size(); i++)
//     {
//         frq[a[i]]++;
//     }
//     for (int j = 0; j< b.size(); j++)
//     {
//         frq[b[j]]++;
//     }
//     for(auto &it:frq)
//     {
//         result.push_back(it.first);
//     }
//     return result;

// }

// int main() {
 
    
//    // Input array sizes
//     int size_a, size_b;
//     cout << "Enter the size of array a: ";
//     cin >> size_a;
//     cout << "Enter the size of array b: ";
//     cin >> size_b;

//     // Input elements for array a
//     cout << "Enter elements for array a:" << endl;
//     vector<int> a(size_a);
//     for (int i = 0; i < size_a; ++i) {
//     cin >> a[i];
//     }

//     // Input elements for array b
//     cout << "Enter elements for array b:" << endl;
//     vector<int> b(size_b);
//     for (int i = 0; i < size_b; ++i) {
//         cin >> b[i];
//     }
 
//  vector<int> merged = sortedArray(a, b);

//     // Display the merged array
//     cout << "Merged array after union operation:" << std::endl;
//     for (int num : merged) {
//         cout << num << " ";
//     }
//     cout << std::endl;



//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

set<int> mergedArray(int arr1[], int arr2[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    }
    return s;
}

int main() {
    int n = 5;
    int arr1[] = {11, 12, 14, 3, 4};
    int arr2[] = {10, 4, 3, 2, 12};
    set<int> merged = mergedArray(arr1, arr2, n);
    for (auto it = merged.begin(); it != merged.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

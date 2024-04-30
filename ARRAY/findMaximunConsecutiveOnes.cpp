#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int findMaxOnes(int arr[], int n)
{
    int count = 0;
    int maxones = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maxones = max(maxones, count);
    }
    return maxones; 
}

int main()
{
    int arr[] = {1,1,0,1,1,1} ;
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max_ones = findMaxOnes(arr, n);
    cout << "Maximum consecutive ones: " << max_ones << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int removeDuplicates(int arr[], int n)
// {
//     set<int> set;
//     for (int i = 0; i < n; i++)
//     {
//         set.insert(arr[i]);
//     }
//     int sizeOfArray = set.size();
//     int j = 0;
//     for (int x : set)
//     {
//         arr[j++] = x;
//     }
//     return sizeOfArray;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     removeDuplicates(arr, n);
//     int sizeOfArray = removeDuplicates(arr, n);
//     cout << "The array after removing duplicate elements is " << endl;
//     for (int i = 0; i < sizeOfArray; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// two pointer aproach

#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{ int i=0;
for (int  j= 1; i < n; j++)
{
    if(arr[j]!=arr[i])
    {
        arr[i+1]=arr[j];
        i++;

    }
}
return i+1;

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    removeDuplicates(arr, n);
}
#include <iostream>
using namespace std;
int mergeSort(int arr[], int low, int high)
{//BASE CASE

if(low>=high)return;
int mid=(low+high)/2;
mergeSort(arr,low,mid);
mergeSort(arr,mid+1,high);
merge(arr,low,mid,high);

    
}
int main()
{
    int arr[] ={12,2,1,21,21,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low=arr[0];
    int high=arr[n-1];
    mergeSort(arr,low,high);
}

// // code writen by chatgpt
// #include <iostream>
// #include <vector>

// std::vector<int> reverseArray(int n, std::vector<int> &nums)
// {
//     int left = 0;
//     int right = n - 1;

//     while (left < right)
//     {
//         // Swap nums[left] and nums[right]
//         int temp = nums[left];
//         nums[left] = nums[right];
//         nums[right] = temp;

//         // Move the pointers towards the center
//         left++;
//         right--;
//     }

//     return nums;
// }

// int main()
// {
//     int n;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> n;

//     std::vector<int> nums(n);

//     std::cout << "Enter the elements of the array:" << std::endl;
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> nums[i];
//     }

//     std::vector<int> reversedArray = reverseArray(n, nums);

//     std::cout << "Reversed array:" << std::endl;
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << reversedArray[i] << " ";
//     }

//     std::cout << std::endl;

//     return 0;
// }
// code written
// #include <iostream>
// using namespace std;

// void printArray(int ans[], int n) {
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << ans[i] << " ";
//    }
// }
// void reverseArray(int arr[], int n) {
//    int ans[n];
//    for (int i = n - 1; i >= 0; i--) {
//       ans[n - i - 1] = arr[i];
//    }
//    printArray(ans, n);
// }
// int main() {
//    int n = 5;
//    int arr[] = {5,4,3,2,1};
//    reverseArray(arr, n);
//    return 0;
// }
// space optimized iterative approach or we can say two pointer approach
// #include <iostream>
// using namespace std;
// void  printArray(int arr[],int n)
// {
// cout<< "the reverse of the array is "<<endl;
// for (int  i = 0; i < n; i++)
// {
//    cout<<arr[i];
// }

// }
// void reversearray(int arr[],int n)
// {
//    int p1=0;
//    int p2=n-1;
//    while (p1<p2)
//    {
//       swap(arr[p1],arr[p2]);
//       p1++;p2--;
//    }
//    printArray(arr,n);

// }
// int main()
// {
//    int n=5;
//    int arr[] ={2,5,3,5,5};
//    reversearray(arr,n);
//    return 0;
// }
// RECURSIVE METHOD
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "the reverse of the array is" << endl;
    for (int i = 0; i < n; i++)//printing loop
    {
        cout << arr[i] << " ";
    }
}
void reverseArray(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);//Recursive call
    }
}
int main()
{
    int n = 5;
    int arr[] = {12, 123, 34, 12, 435};
    reverseArray(arr, 0, n - 1); // passing the value in recursive function
    printArray(arr, n);//passing the values for printing array
    return 0;
}
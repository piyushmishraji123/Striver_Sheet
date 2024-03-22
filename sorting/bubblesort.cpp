
#include <iostream>
using namespace std;
//love baabbar
// void bubble_sort(int arr[], int n) {
//     for(int i=1;i<n ;i++ )
//     {
//         for (int j = 0; j <=n-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//     //   int temp =arr[j+1];
//     //   arr[j+1]=arr[j];
//     //   arr[j]=temp;
//     swap(arr[j],arr[j+1]);
               
//             }
            
//         }
        
//     }

// }
//striver
void bubble_sort(int arr[], int n) {
     //5 4 3 2 1
    for(int i=n-1;i>=0 ;i-- )
    {
        for (int j = 0; j <=i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
      int temp =arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
    // swap(arr[j],arr[j+1]);

               
            }
            
        }
        
    }

}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*include <iostream>
using namespace std;

int main()
{
    int arr[6] ={12,23,34,45,67};
    cout<<arr[2];

}*/
/*#include <iostream>
using namespace std;

int main()
{   int n;
    int arr[n];
    cin>>n;
    for(int i; i<n; i++)
    {
        cin>>arr[i];
    }
  for(int i; i<n; i++)
   {
    cout<<arr[i];
    }

}
*/

// inittialize an array
/*include <iostream>
using namespace std;
int main()
{
  int array[5]={5};
  cout<<array[0]<<array[3];
  int n=12;

}*/
// printing array
/*#include <iostream>
using namespace std;
int main()
{ int n=12;
  int arr[12]={12,23,456,79,7809,2351,234};
  for(int i=0;i<=n;i++ )
  {
    cout<<arr[i]<<" ";
  }*/
// input and output using for loop in array
/*#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout << "enter the length of array:";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cout << "enter the element" << i + 1 << "::";
      cin >> arr[i];
    }
          cout << "our final array is:";
  for (int i = 0; i < n; i++)
    {

      cout << arr[i]<< " ";
    }
}*/
// array wwith function
// #include <iostream>
// using namespace std;
// void printarray(int arr[6])
// {
//   for (int i; i < 6; i++)
//   {
//     cout << arr[i]<<" ";
//   }
// }
// int main()
// {

//   int arr[6] = {1, 2, 2, 3, 4};
//   printarray(arr);
//   return 0;
// }
// program to calculate the size of an arrray
#include<iostream>
using namespace std;

int main() {
    int arr[] = {12, 34, 45, 45, 6, 56};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Size of the array is: " << size << endl;

    return 0;
}
// sizeof(arr) - This part of the expression calculates the total size of the array arr in bytes. It doesn't count the number of elements; instead, it measures the memory occupied by the entire array.

// sizeof(arr[0]) - This part of the expression calculates the size of an individual element in the array. arr[0] represents the first element of the array, and sizeof(arr[0]) gives you the size of that element in bytes.
  
// sizeof(arr) / sizeof(arr[0]) - This is the division of the total size of the array by the size of an individual element. It results in the number of elements in the array.

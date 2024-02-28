//The sort() function in STL accepts two mandatory parameters: begin, and end, and sorts the range with-in the container in ascending order by default.
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[] = {4,2,1};

sort(arr, arr+3);
cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}

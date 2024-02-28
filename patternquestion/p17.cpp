
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;        // 4
  int row = 1;     // row=1,2,3,4
  while (row <= n) // 1<=4 2<=4,3<=4
  {
    int col = 1;       // col =1
    while (col <= row) // 
    {
      int a = row - col + 1; // 
      cout << a;             //  1
                             //  2  1
                             //  3  2 1
                             //  4  3  2  1

      col++;
    }
    cout << endl;
    row++;
  }
}*/
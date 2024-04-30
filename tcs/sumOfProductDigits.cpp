#include <bits/stdc++.h>
using namespace std;
void sumOfTable(int n)
{   
    int sum=0;
    
    for (int i = 1; i <=10; i++)
    {
        sum+=n*i;
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    sumOfTable(n);
    return 0;
}
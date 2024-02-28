#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> printRAM(int n)
{
    vector<string> result; // Create a vector to store strings
    if (n <= 0)
    {
        return result; // Base case: return an empty vector
    }
    
    result = printRAM(n - 1); // Recursive call
    
    for (int i = 1; i <= n; i++)
    {
        result.push_back("RAM");
    }

    return result; // Return the vector containing "RAM" repeated n times
}

int main()
{
    int n;
    cout << "Enter the number of times to print: ";
    cin >> n;
    
    vector<string> result = printRAM(n);
    for (const string& s : result)
    {
        cout << s << " ";
    }

    return 0;
}

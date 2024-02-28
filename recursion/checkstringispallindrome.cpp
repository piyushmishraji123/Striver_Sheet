// program to check  string is pallindrome or not
#include <iostream>
using namespace std;
bool isPallindrome(int i, string &str)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    return isPallindrome(i + 1, str);
}

// bool checkString(string &str)
// {
//     int left = 0;
//     int right = str.length() - 1;
//     while (left < right)
//     {
//         if ( str[left] != str[right])
//                 {return false;}

//     left++;
//     right--;
//     }
//     return true;

// }
int main()
{
    // string str;
    // cout << "enter the string";
    // cin >> str;
    // checkString(str);
    //  if ( checkString(str)) {
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }

    // return 0;
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPallindrome(0, input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
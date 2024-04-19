#include <iostream>
#include <string>

using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    string reversedStr;
    // Iterate over the string in reverse order and append each character to the reversed string
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr.push_back(str[i]);
    }
    return reversedStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversedStr = reverseString(str);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

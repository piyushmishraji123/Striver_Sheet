//copy pasted from chatgpt

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(const std::string& str) {
    // Create a copy of the string
    string copy = str;
    
    // Remove spaces and convert to lowercase
    copy.erase(remove_if(copy.begin(), copy.end(), [](char c) {
        return isspace(static_cast<unsigned char>(c));
    }), copy.end());
    
    // Convert all characters to lowercase
    transform(copy.begin(), copy.end(), copy.begin(), ::tolower);
    
    // Compare original string with its reverse
    return copy == string(copy.rbegin(), copy.rend());
}

string findFirstPalindrome(const vector<string>& arr) {
    for (const string& str : arr) {
        if (isPalindrome(str)) {
            return str;
        }
    }
    return ""; // Return empty string if no palindrome found
}

int main() {
    vector<string> arr = {"hello", "world", "level", "racecar", "apple"};
    
    string firstPalindrome = findFirstPalindrome(arr);
    
    if (!firstPalindrome.empty()) {
        cout << "First palindrome string found: " << firstPalindrome << endl;
    } else {
        cout << "No palindrome string found in the array." <<  endl;
    }
    
    return 0;
}

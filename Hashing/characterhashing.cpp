#include<iostream>
using namespace std;

int f(char c, string s) {
    int n = s.size();
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char c;
    cin >> c;
    string s;
    cin >> s;
    int count = f(c, s);
    cout << "The character " << c << " appears " << count << " times in the string." << endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;
    
//     // Precompute
//     int hash[26] = {0};
//     for (int i = 0; i < str.size(); i++) {
//         hash[str[i] - 'a']++;
//     }
    
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c; // Remove the space before >>
        
//         // Fetch
//         cout << hash[c - 'a'] << endl;
//     }
    
//     return 0;
// }

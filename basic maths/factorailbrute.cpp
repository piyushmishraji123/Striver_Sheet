#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else if (n <= 1) {
        cout << n << "! = " << factorial << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        cout << n << "! = " << factorial << endl;
    }

    return 0;
}
//another methods of calculalting the factorial of a given number
//iterative
#include <iostream>
using namespace std;

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " (Iterative): " << factorialIterative(num) << endl;
    return 0;
}
// Recursive method
#include <iostream>
using namespace std;

unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " (Recursive): " << factorialRecursive(num) << endl;
    return 0;
}
//memoization with recursion
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, unsigned long long> memo;

unsigned long long factorialMemo(int n) {
    if (n <= 1) {
        return 1;
    }
    
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    
    memo[n] = n * factorialMemo(n - 1);
    return memo[n];
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " (Memoization): " << factorialMemo(num) << endl;
    return 0;
}


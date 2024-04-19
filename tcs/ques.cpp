#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int getNthTerm(int n) {
  if (n <= 1) {
    return n;
  } else if (n % 2 == 1) {
    // Odd terms form a Fibonacci series
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  } else {
    // Even terms are prime numbers
    int count = 0, num = 2;
    while (count < n / 2) {
      if (isPrime(num)) {
        count++;
      }
      num++;
    }
    return num - 1;
  }
}

int main() {
  int N;
  cin >> N;
  cout << getNthTerm(N) << endl;
  return 0;
}

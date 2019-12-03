#include <bits/stdc++.h>

using namespace std;

int sum_digits(int n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
  int n;
  int p = 11;
  while (cin >> n && n != 0) {
    while (sum_digits(n * p) != sum_digits(n)) {
      p++;
    }
    cout << p << '\n';
    p = 11;
  }

  return 0;
}

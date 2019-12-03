#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int rev1 = 0, rev2 = 0;
  while (a != 0) {
    rev1 = rev1 * 10 + a % 10;
    a /= 10;
  }
  while (b != 0) {
    rev2 = rev2 * 10 + b % 10;
    b /= 10;
  }
  if (rev1 > rev2) {
    cout << rev1 << '\n';
  } else {
    cout << rev2 << '\n';
  }
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, d, x;
  cin >> l >> d >> x;
  int sum = 0;
  int mn = 10000, mx = 0;
  for (int i = l; i <= d; i++) {
    sum = 0;
    int y = i;
    while (y != 0) {
      sum += y % 10;
      y /= 10;
    }
    if (sum == x) {
      mn = min(mn, i);
      mx = max(mx, i);
    }

  }
  cout << mn << '\n';
  cout << mx << '\n';
  return 0;
}

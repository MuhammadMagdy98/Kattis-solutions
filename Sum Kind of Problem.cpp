#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    cout << x << ' ' << (long long) y * (y + 1) / 2 << ' ' << (long long) y * y << ' ' << (long long) y * (y + 1) << '\n';
  }
  return 0;
}

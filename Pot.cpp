#include <bits/stdc++.h>

using namespace std;

int power(int b, int e) {
  int power = 1;
  for (int i = 0; i < e; i++) {
    power *= b;
  }
  return power;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int x;
    cin >> x;
    ans += power(x / 10, x % 10);
  }
  cout << ans << '\n';
  return 0;
}

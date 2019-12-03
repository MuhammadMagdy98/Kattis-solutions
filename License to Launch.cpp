#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int x;
  cin >> x;
  int mn = x;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x < mn) {
      mn = x;
      ans = i;
    }
  }
  cout << ans << '\n';
  return 0;
}

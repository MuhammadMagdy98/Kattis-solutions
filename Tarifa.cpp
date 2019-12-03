#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  cin >> x;
  int t;
  cin >> t;
  int ans = 0;
  while (t--) {
    int y;
    cin >> y;
    ans += x;
    ans -= y;
  }
  cout << ans + x << '\n';
  return 0;
}

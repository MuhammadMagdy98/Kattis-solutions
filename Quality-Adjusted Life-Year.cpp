#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  double ans = 0.0;
  while (N--) {
    double q, y;
    cin >> q >> y;
    ans += q * y;
  }
  cout << ans << '\n';
  return 0;
}

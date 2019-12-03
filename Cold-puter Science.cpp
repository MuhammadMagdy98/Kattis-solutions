#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int cnt = 0;
  while (t--) {
    int x;
    cin >> x;
    cnt += (x < 0);
  }
  cout << cnt << '\n';
  return 0;
}

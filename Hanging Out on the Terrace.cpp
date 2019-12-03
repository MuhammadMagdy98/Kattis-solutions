#include <bits/stdc++.h>

using namespace std;

int main() {
  int limit, t;
  cin >> limit >> t;
  int cur = 0, ans = 0;
  while (t--) {
    string s;
    int x;
    cin >> s >> x;
    if (s[0] == 'e') {
      if (cur + x > limit) {
        ans++;
      } else {
        cur += x;
      }
    } else {
      cur -= x;
    }
  }
  cout << ans << '\n';
  return 0;
}

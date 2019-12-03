#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string a, b;
    cin >> a >> b;
    string ans;
    for (int i = 0; i < a.length(); i++) {
      if (a[i] == b[i]) {
        ans += '.';
      } else {
        ans += '*';
      }
    }
    cout << a << '\n' << b << '\n' << ans << '\n';
  }

  return 0;
}

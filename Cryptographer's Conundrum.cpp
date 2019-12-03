#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  const string per = "PER";
  int ans = 0;
  for (int i = 0; i < (int) s.size(); i++) {
    if (s[i] != per[i % 3]) {
      ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}

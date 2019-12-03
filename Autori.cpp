#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  ans.push_back(s[0]);
  int len = (int) s.size();
  for (int i = 1; i < len; i++) {
    if (s[i] == '-') {
      ans.push_back(s[i + 1]);
    }
  }
  cout << ans << '\n';
  return 0;
}

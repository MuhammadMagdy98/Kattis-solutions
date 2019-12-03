#include <bits/stdc++.h>

using namespace std;

bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  string s;
  getline(cin, s);
  string ans;
  for (int i = 0; i < s.length(); i++) {
    if (vowel(s[i])) {
      ans += s[i];
       i += 2;
    } else {
      ans += s[i];
    }
  }
  cout << ans << '\n';

  return 0;
}

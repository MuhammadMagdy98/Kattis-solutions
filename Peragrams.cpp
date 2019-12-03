#include <bits/stdc++.h>

using namespace std;

int main() {
  int cnt[26]{};
  string s;
  cin >> s;
  int len = (int) s.size();
  for (int i = 0; i < len; i++) {
    cnt[s[i]- 'a']++;
  }
  int numodd = 0;
  for (int i = 0; i < 26; i++) {
    if (cnt[i] % 2 != 0) {
        numodd++;
    }
  }
  if (numodd == 0) {
    cout << 0 << '\n';
  } else {
    cout << numodd - 1 << '\n';
  }
  return 0;
}

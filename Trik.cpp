#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt[3]{1, 0, 0};
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A') {
      swap(cnt[0], cnt[1]);
    } else if (s[i] == 'B') {
      swap(cnt[1], cnt[2]);
    } else {
      swap(cnt[0], cnt[2]);
    }
  }
  int idx = 0;
  for (int i = 0; i < 3; i++) {
    if (cnt[i] == 1) {
      idx = i + 1;
    }
  }
  cout << idx;
  return 0;
}

#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int cnt = 0, go = 0;
  sort(s.begin(), s.end());
  bool marked[256]{};
  s.resize(unique(s.begin(), s.end()) - s.begin());
  for (int i = 0; i < t.length(); i++) {
    if (marked[t[i]]) continue;
    if (s.find(t[i]) != string::npos) {
      go++;
      marked[t[i]] = true;
      if (go == s.length()) {
        cout << "WIN\n";
        return 0;
      }
    } else {
      cnt++;
      if (cnt >= 10) {
        cout << "LOSE\n";
        return 0;
      }
    }
  } 
  cout << "LOSE\n";
  return 0;
}

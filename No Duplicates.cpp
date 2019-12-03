#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  vector<string> v;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      int k = i - 1;
      string tmp;
      while (k >= 0 && s[k] != ' ') {
        tmp += s[k];
        k--;
      }
      reverse(tmp.begin(), tmp.end());
      v.push_back(tmp);
    }
  }
  int k = s.length() - 1;
  string tmp;
  while (k >= 0 && s[k] != ' ') {
    tmp += s[k];
    k--;
  }
  reverse(tmp.begin(), tmp.end());
  v.push_back(tmp);
  set<string> st(v.begin(), v.end());
  if (st.size() != v.size()) {
    cout << "no\n";
  } else {
    cout << "yes\n";
  }
  return 0;
}

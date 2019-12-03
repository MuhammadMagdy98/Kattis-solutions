#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<string> st;
    while (n--) {
      string s;
      cin >> s;
      st.insert(s);
    }
    cout << st.size() << '\n';
  }
  return 0;
}

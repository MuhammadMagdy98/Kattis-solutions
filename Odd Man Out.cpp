#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  map<int, int> mp;
  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;
    map<int, int> mp;
    for (int j = 0; j < x; j++) {
      int y;
      cin >> y;
      mp[y]++;
    }
    for (auto x : mp) {
      if (x.second == 1) {
        cout << "Case #" << i + 1 << ": " << x.first << '\n';
        break;
      }
    }
  }
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int cnt = 1;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }
    cout << "Test " << cnt++ << '\n';
    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        cout << arr[i][j];
      }
      cout << '\n';
    }
  }
  return 0;
}

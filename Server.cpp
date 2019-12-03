#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  int sum = 0;
  int i;
  for (i = 1; i <= n; i++) {
    int x;
    cin >> x;
    sum += x;
    if (sum > t) {
      cout << i - 1 << '\n';
      return 0;
    }
  }
  cout << i - 1 << '\n';
  return 0;
}

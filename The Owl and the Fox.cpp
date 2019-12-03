#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
  int ret = 0;
  while (n != 0) {
    ret += n % 10;
    n /= 10;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int sum_digit = 0;
    for (int j = x; j != 0; j /= 10) {
      sum_digit += j % 10;
    }
    while (sum_digit <= sum(x)) {
      x--;
    }
    cout << x << '\n';
  }
  return 0;
}

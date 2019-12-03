#include <bits/stdc++.h>

using namespace std;

int main() {
  int mx = 0;
  int k = 0;
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      int x;
      cin >> x;
      sum += x;
    }
    if (sum > mx) {
      mx = sum;
      k = i + 1;
    }
  }
  cout << k << ' ' << mx << '\n';
  return 0;
}

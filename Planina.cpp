#include <bits/stdc++.h>

using namespace std;
long long pw(long long a, long long b) {
  long long ans = 1;
  for (int i = 0; i < b; i++) {
    ans *= a;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << (pw(2, n) + 1) * (pw(2, n) + 1);
  return 0;
}

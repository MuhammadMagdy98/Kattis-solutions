#include <bits/stdc++.h>

using namespace std;

const int N = 105;
bool in[N];

int main() {
  int n, r;
  cin >> n >> r;
  while (r--) {
    int x;
    cin >> x;
    in[x] = true;
  }
  for (int i = 1; i <= n; i++) {
    if (!in[i]) {
      cout << i << '\n';
      return 0;
    }
  }
  cout << "too late\n";
  return 0;
}

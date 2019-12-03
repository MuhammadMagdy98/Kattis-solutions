#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  int arr[32];
  while (n != 0) {
    arr[cnt++] = n % 2;
    n /= 2;
  }
  int ans = 0;
  int x = 0;
  for (int i = cnt - 1; i >= 0; i--) {
    ans += arr[i] * pow(2, x++);
  }
  cout << ans << '\n';
  return 0;
}

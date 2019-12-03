#include <bits/stdc++.h>

using namespace std;

bool harsh(int n) {
  int x = n;
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return x % sum == 0;
}

int main() {
  int n;
  cin >> n;
  for (int i = n; ; i++) {
    if (harsh(i)) {
      cout << i << '\n';
      break;
    }
  }
  return 0;
}

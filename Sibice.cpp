#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  int d = w * w + h * h;
  while (n--) {
    int x;
    cin >> x;
    if (x * x > d) {
      cout << "NE\n";
    } else {
      cout << "DA\n";
    }
  }
  return 0;
}

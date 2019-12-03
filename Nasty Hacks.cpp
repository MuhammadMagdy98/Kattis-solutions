#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x + z == y) {
      cout << "does not matter\n";
    } else if (x + z < y) {
      cout << "advertise\n";
    } else {
      cout << "do not advertise\n";
    }
  }
  return 0;
}

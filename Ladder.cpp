#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, v;
  cin >> h >> v;
  const double PI = acos(-1);
  int res = ceil(h / sin(v * PI / 180));
  cout << res;
  return 0;
}

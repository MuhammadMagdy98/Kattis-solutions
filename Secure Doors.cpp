#include <bits/stdc++.h>

using namespace std;

int main() {
  set<string> enter;
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    if (a == "entry") {
      if (enter.count(b)) {
        cout << b << " entered (ANOMALY)\n";
      } else {
        enter.insert(b);
        cout << b << " entered\n";
      }
    } else {
      if (!enter.count(b)) {
        cout << b << " exited (ANOMALY)\n";
      } else {
        enter.erase(b);
        cout << b << " exited\n";
      }
    }
  }
  return 0;
}

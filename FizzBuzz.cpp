#include <iostream>

using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  for (int i = 1; i <= n; i++) {
    if (i % a == 0 && i % b != 0) {
      cout << "Fizz\n";
    } else if (i % b == 0 && i % a != 0) {
      cout << "Buzz\n";
    } else if (i % a == 0 && i % b == 0) {
      cout << "FizzBuzz\n";
    } else {
      cout << i << '\n';
    }
  }
  return 0;
}

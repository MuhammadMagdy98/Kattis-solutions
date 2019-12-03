#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long double ans = 0;
    for (int i = 0; i <= n && i != 17; i++) {
        long long fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        ans += 1.0 / fact;
    }
    cout << fixed;
    cout.precision(12);
    cout << ans << '\n';
    return 0;
}

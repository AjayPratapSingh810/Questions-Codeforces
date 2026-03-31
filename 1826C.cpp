#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (n == 1 || m == 1) {
            cout << "YES\n";
            continue;
        }

        long long smallestDiv = n;

        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                smallestDiv = i;
                break;
            }
        }

        if (smallestDiv > m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

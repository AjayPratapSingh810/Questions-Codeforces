#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
const long long MOD = 998244353;



int main() {
    // Precompute 2^i % MOD


    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        long long power2[n];
            power2[0] = 1;
        for (int i = 1; i < n; ++i)
            power2[i] = (power2[i - 1] * 2) % MOD;
        vector<int> p(n), q(n);

        for (int i = 0; i < n; ++i)
            cin >> p[i];

        for (int i = 0; i < n; ++i)
            cin >> q[i];

        for (int x = 0, y = 0, i = 0; i < n; ++i) {

            if (p[i] > p[x]) x = i;
            if (q[i] > q[y]) y = i;

            long long result;

            if (p[x] != q[y]) {
                if (p[x] > q[y]) {
                    result = (power2[p[x]] + power2[q[i - x]]) % MOD;
                } else {
                    result = (power2[q[y]] + power2[p[i - y]]) % MOD;
                }
            } else {
                if (p[x] + q[i - x] > q[y] + p[i - y]) {
                    result = (power2[p[x]] + power2[q[i - x]]) % MOD;
                } else {
                    result = (power2[q[y]] + power2[p[i - y]]) % MOD;
                }
            }

            cout << result << " ";
        }

        cout << "\n";
    }

    return 0;
}

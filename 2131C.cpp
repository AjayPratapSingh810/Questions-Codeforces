#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> remainderCount(k, 0);
        vector<long long> arr2(n);

        // read first array
        for (long long i = 0; i < n; i++) {
            long long value;
            cin >> value;
            remainderCount[(value % k + k) % k]++;
        }

        // read second array
        for (long long i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        bool isValid = true;

        // check matching
        for (long long i = 0; i < n; i++) {
            long long rem = (arr2[i] % k + k) % k;
            long long need1 = rem;
            long long need2 = (k - rem) % k;

            if (remainderCount[need1] > 0) {
                remainderCount[need1]--;
            }
            else if (remainderCount[need2] > 0) {
                remainderCount[need2]--;
            }
            else {
                isValid = false;
                break;  // break early if already invalid
            }
        }

        cout << (isValid ? "Yes\n" : "No\n");
    }

    return 0;
}

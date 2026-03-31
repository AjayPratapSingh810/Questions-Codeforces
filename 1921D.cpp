#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    while (cases--) {
        int n, m;
        cin >> n >> m;

        vector<int> arrAsc(n), arrDsc(n);
        vector<int> arr2Asc(m), arr2Dsc(m);

        for (int i = 0; i < n; i++) {
            cin >> arrAsc[i];
            arrDsc[i] = arrAsc[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> arr2Asc[i];
            arr2Dsc[i] = arr2Asc[i];
        }

        sort(arrAsc.begin(), arrAsc.end());
        sort(arr2Asc.begin(), arr2Asc.end());

        sort(arrDsc.begin(), arrDsc.end(), greater<int>());
        sort(arr2Dsc.begin(), arr2Dsc.end(), greater<int>());

        long long ans = 0;
        int i = 0, j = 0;

        while (i + j < n) {
            if (i < n && abs(arrAsc[i] - arr2Dsc[i]) > abs(arrDsc[j] - arr2Asc[j])) {
                ans += abs(arrAsc[i] - arr2Dsc[i]);
                i++;
            } else {
                ans += abs(arrDsc[j] - arr2Asc[j]);
                j++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

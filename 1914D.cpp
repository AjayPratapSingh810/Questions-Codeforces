#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<pii> a(n), b(n), c(n);

        // Input
        for (ll i = 0; i < n; i++) cin >> a[i].first, a[i].second = i;
        for (ll i = 0; i < n; i++) cin >> b[i].first, b[i].second = i;
        for (ll i = 0; i < n; i++) cin >> c[i].first, c[i].second = i;

        // Sort descending
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        ll ans = 0;
        ll limit = min(3LL, n);

        // Try best 3 candidates from each
        for (ll i = 0; i < limit; i++) {
            for (ll j = 0; j < limit; j++) {
                if (a[i].second == b[j].second) continue;

                for (ll k = 0; k < limit; k++) {
                    if (c[k].second == a[i].second ||
                        c[k].second == b[j].second) continue;

                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

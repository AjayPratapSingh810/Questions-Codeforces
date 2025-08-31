#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> c = a, d = b;
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());

        vector<int> ans(n);
        vector<bool> used(n, false);  // for tracking used indices in sorted 'c'
        unordered_map<int,queue<int> > mp;
        for (int i = 0; i < n; i++) {
            mp[c[i]].push(d[i]);
        }
        for (int i = 0; i < n; i++) {
            ans[i] = mp[a[i]].front();
            mp[a[i]].pop();
        }
        
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

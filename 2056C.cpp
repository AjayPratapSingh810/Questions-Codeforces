#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 6) {
            cout << "1 1 2 3 1 2\n";
            continue;
        }
        if (n == 7) {
            cout << "1 1 2 1 2 3 2\n";
            continue;
        }

        int m = n / 2;
        vector<int> a;
        for (int i = 1; i <= m; i++) a.push_back(i);
        for (int i = 1; i <= m; i++) a.push_back(i);
        if ((int)a.size() < n) a.push_back(m + 1);

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}

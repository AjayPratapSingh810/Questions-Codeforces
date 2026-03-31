#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    // Pre-calculate initial count of "abc"
    int ans = 0;
    for (int i = 0; i + 2 < n; i++) {
        if (s.substr(i, 3) == "abc") ans++;
    }

    while (q--) {
        int a;
        char ch;
        cin >> a >> ch;
        a--; // Convert to 0-based index

        // Remove contribution of affected substrings before update
        for (int i = a - 2; i <= a; i++) {
            if (i >= 0 && i + 2 < n && s.substr(i, 3) == "abc")
                ans--;
        }

        // Apply the change
        s[a] = ch;

        // Add contribution of affected substrings after update
        for (int i = a - 2; i <= a; i++) {
            if (i >= 0 && i + 2 < n && s.substr(i, 3) == "abc")
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}

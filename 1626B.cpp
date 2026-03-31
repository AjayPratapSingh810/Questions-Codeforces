#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int n = x.size();
        int pos = -1;

        // Find the rightmost pair whose sum >= 10
        for (int i = n - 2; i >= 0; i--) {
            int a = x[i] - '0';
            int b = x[i + 1] - '0';
            if (a + b >= 10) {
                pos = i;
                break;
            }
        }

        if (pos != -1) {
            int sum = (x[pos] - '0') + (x[pos + 1] - '0');
            x.replace(pos, 2, to_string(sum));
        } else {
            // No pair with sum >= 10, merge the first two digits
            int sum = (x[0] - '0') + (x[1] - '0');
            x.replace(0, 2, to_string(sum));
        }

        cout << x << endl;
    }
    return 0;
}

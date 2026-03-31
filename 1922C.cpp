#include <iostream>
#include <vector>
#include <climits>

using namespace std;

char type(int i, const vector<int>& arr, int n) {
    int l = (i == 0) ? INT_MAX : arr[i] - arr[i - 1];
    int r = (i == n - 1) ? INT_MAX : arr[i + 1] - arr[i];

    if (l < r) return 'L';
    if (l > r) return 'R';
    return 'X';
}

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> l(n, 0), r(n, 0);

        for (int i = 1; i < n; i++) {
            r[i] = r[i - 1] + (type(i - 1, arr, n) == 'R' ? 1 : arr[i] - arr[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--) {
            l[i] = l[i + 1] + (type(i + 1, arr, n) == 'L' ? 1 : arr[i + 1] - arr[i]);
        }

        int m;
        cin >> m;

        while (m--) {
            int a, b;
            cin >> a >> b;
            a--; 
            b--;

            if (a < b) {
                cout << r[b] - r[a] << endl;
            } else {
                cout << l[b] - l[a] << endl;
            }
        }
    }

    return 0;
}

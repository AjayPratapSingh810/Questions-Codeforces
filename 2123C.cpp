#include <bits/stdc++.h>
using namespace std;

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

        vector<int> prefixMin(n), suffixMax(n);
        unordered_map<int, bool> mark;

        // Prefix min from left
        prefixMin[0] = arr[0];
        mark[arr[0]] = true;
        for (int i = 1; i < n; i++) {
            prefixMin[i] = min(prefixMin[i - 1], arr[i]);
            mark[prefixMin[i]] = true;
        }

        // Suffix max from right
        suffixMax[n - 1] = arr[n - 1];
        mark[arr[n - 1]] = true;
        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], arr[i]);
            mark[suffixMax[i]] = true;
        }

        // Build binary result
        string binary = "";
        for (int i = 0; i < n; i++) {
            if (mark[arr[i]])
                binary.push_back('1');
            else
                binary.push_back('0');
        }

        cout << binary << endl;
    }

    return 0;
}

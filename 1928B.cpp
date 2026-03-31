#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        unordered_set<int> uniqueVals;
        vector<long long> arr;

        // Input + remove duplicates
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (uniqueVals.insert(x).second) {
                arr.push_back(x);
            }
        }

        // Sort unique elements
        sort(arr.begin(), arr.end());

        int m = arr.size(); 

        int left = 0;
        int maxLen = 1;

        // Sliding window
        for (int right = 0; right < m; right++) {
            while (arr[right] - arr[left] >= n) {
                left++;
            }

            int currentLen = right - left + 1;
            maxLen = max(maxLen, currentLen);
        }

        cout << maxLen << endl;
    }

    return 0;
}

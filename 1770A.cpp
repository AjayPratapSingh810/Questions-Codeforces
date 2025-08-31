#include <bits/stdc++.h>
using namespace std;

int main() {
    long long cases;
    cin >> cases;

    while (cases--) {
        long long n, m;
        cin >> n >> m;
        priority_queue<long long, vector<long long>, greater<long long>> minHeap; // for arr1
        priority_queue<long long> maxHeap; // for arr2

        // Input arr1 long longo minHeap
        for (long long i = 0; i < n; i++) {
            long long a;
            cin >> a;
            minHeap.push(a);
        }

        // Input arr2 long longo maxHeap
        for (long long j = 0; j < m; j++) {
            long long a;
            cin >> a;
            maxHeap.push(a);
        }

        // Replace min from arr1 with max from arr2 if it's beneficial
        long long ans = 0;
        while (!minHeap.empty() && !maxHeap.empty()) {
            long long maxVal = maxHeap.top();
                minHeap.pop();
                maxHeap.pop();
                ans += maxVal;
        }

        // Sum the elements in minHeap (final arr1 values)
        while (!minHeap.empty()) {
            ans += minHeap.top();
            minHeap.pop();
        }

        cout << ans << endl;
    }

    return 0;
}

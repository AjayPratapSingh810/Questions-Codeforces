#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n, k;
        cin >> n >> k;

        vector<int> org(n), arr(n);

        for (int i = 0; i < n; i++) {
            cin >> org[i];
            arr[i] = org[i];
        }

        // Sort in descending order
        sort(arr.begin(), arr.end(), greater<int>());

        long long sum = 0;

        // Take first k largest elements
        for (int i = 0; i < k+1; i++) {
            sum += arr[i];
        }

        if (k == 1) {
            int maxi = max(org[n-1],org[0]);
            if(arr[0] == maxi){
                maxi += arr[1];
            }else{
                maxi += arr[0];
            }
            cout << maxi << endl;
            continue;
        }

        cout << sum << endl;
    }

    return 0;
}

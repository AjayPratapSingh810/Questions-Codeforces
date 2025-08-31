#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        vector<int> arr(n,-1), b(n,-1);

        // Read input and initialize 'b' as a sorted copy of 'arr'
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            b[i] = arr[i];
        }
        sort(b.begin(), b.end());

        // Ensure no element remains in its original position (derangement)
        for (int i = 0; i < n; i++) {
            if (b[i] == arr[i] && n > 1) {
                // Swap with the next element (or previous if at the end)
                if (i < n - 1) {
                    swap(b[i], b[i + 1]);
                } else {
                    swap(b[i], b[i - 1]);
                }
            }
        }

        // Edge case: Last element might still match after swaps
        if (n > 1 && b[n - 1] == arr[n - 1]) {
            swap(b[n - 1], b[n - 2]);
        }
        if(arr == b){
            cout << -1 << endl;
            continue;
        }
        // Output the derangement
        for (int num : b) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
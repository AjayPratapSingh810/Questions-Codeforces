#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long minSum = k * b;
        long long maxSum = k * b + (n * (k - 1));

        if(s < minSum || s > maxSum){
            cout << -1 << endl;
            continue;
        }

        vector<long long> arr(n, 0);
        arr[0] = minSum;  // base requirement
        long long extra = s - minSum;

        // Distribute remaining extra
        for(int i = 0; i < n && extra > 0; i++){
            long long give = min(extra, k - 1LL);
            arr[i] += give;
            extra -= give;
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

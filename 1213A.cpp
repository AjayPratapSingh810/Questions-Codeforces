#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    long long div1 = ceil(static_cast<double>(sum) / n);
    long long div2 = floor(static_cast<double>(sum) / n);

    int cost1 = 0, cost2 = 0, cost3 = 0, cost4 = 0;

    for (int i = 0; i < n; i++) {
        if (abs(div1 - arr[i]) % 2 == 1) {
            cost1++;
        }
        if (abs(div2 - arr[i]) % 2 == 1) {
            cost2++;
        }
        if (abs(div1-1 - arr[i]) % 2 == 1) {
            cost3++;
        }
        if (abs(div2+1 - arr[i]) % 2 == 1) {
            cost4++;
        }
    }

    int mini1 = min(cost1, cost2);
    int mini2 = min(cost3, cost4);
    
    cout << min(mini1,mini2) << endl;
    return 0;
}

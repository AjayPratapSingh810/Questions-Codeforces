#include <iostream>
#include <cmath>
using namespace std;

bool check(long long a) {
    if (a <= 0) return false;
    long long x = sqrt(a);
    return x * x == a;
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        long long sum = 0;
        int arr[n + 1];
        for (int i = 0; i <= n; i++) arr[i] = i;

        for (int i = 1; i <= n; i++) {
            if (check(sum + arr[i])) {
                if (i < n) swap(arr[i], arr[i + 1]);
            }
            sum += arr[i];
        }

        if (check(sum)) {
            cout << -1 << endl;
        } else {
            for (int i = 1; i <= n; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}

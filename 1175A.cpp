#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long n, k;
        cin >> n >> k;

        long long operations = 0;

        if (k == 1) {
            // Only subtraction is possible
            operations = n;
        } else {
            while (n > 0) {
                if (n % k == 0) {
                    n /= k;
                    operations++;
                } else {
                    long long remainder = n % k;
                    n -= remainder;
                    operations += remainder;
                }
            }
        }

        cout << operations << endl;
    }

    return 0;
}

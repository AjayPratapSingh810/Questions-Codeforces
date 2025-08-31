#include <iostream>
#include <string>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string s;
        cin >> s;
        bool zero = false;
        bool even = false;
        long long sum = 0;
        int zeroCount = 0;

        for (char c : s) {
            int a = c - '0';
            if (a == 0) {
                zero = true;
                zeroCount++;
            } else {
                if (a % 2 == 0) {
                    even = true;
                }
            }
            sum += a;
        }
        if (zero && (zeroCount > 1 || even) && sum % 3 == 0) {
            cout << "red" << endl;
        } else {
            cout << "cyan" << endl;
        }
    }
    return 0;
}

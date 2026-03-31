#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;

    long long ans = 0;

    // Continue until one of them becomes zero
    while (a != 0 && b != 0) {
        if (a >= b) {
            ans += a / b;
            a %= b;
        } else {
            ans += b / a;
            b %= a;
        }
    }

    cout << ans << endl;
    return 0;
}

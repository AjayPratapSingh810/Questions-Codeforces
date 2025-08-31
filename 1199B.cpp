// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    double h, s;
    cin >> h >> s;

    double ans = (s * s - h * h) / (2.0 * h);

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}

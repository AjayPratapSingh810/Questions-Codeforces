#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long sum = a + b + c;
        long long div1 = ceil(sum / 3.0);
        long long div2 = floor(sum / 3.0);

        long long a1 = a, b1 = b, c1 = c;
        long long a2 = a, b2 = b, c2 = c;

        // Move each value closer to div1
        if (a1 < div1) a1++;
        else if (a1 > div1) a1--;

        if (b1 < div1) b1++;
        else if (b1 > div1) b1--;

        if (c1 < div1) c1++;
        else if (c1 > div1) c1--;

        int ans1 = abs(a1 - b1) + abs(b1 - c1) + abs(c1 - a1);

        // Move each value closer to div2
        if (a2 < div2) a2++;
        else if (a2 > div2) a2--;

        if (b2 < div2) b2++;
        else if (b2 > div2) b2--;

        if (c2 < div2) c2++;
        else if (c2 > div2) c2--;

        int ans2 = abs(a2 - b2) + abs(b2 - c2) + abs(c2 - a2);

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}

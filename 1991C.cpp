#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        vector<int> arr;
        arr.reserve(n);

        int maxi = INT_MIN;
        int count = 0;
        bool allZero = true;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a != 0)
                allZero = false;

            if (a > maxi)
                maxi = a;

            arr.push_back(a);
        }

        vector<int> ans;

        while (count < 40 && !allZero) {
            allZero = true;
            count++;

            int a = maxi / 2;
            if (maxi % 2)
                a++;
            ans.push_back(a);
            maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                int x = abs(arr[i] - a);
                if(x > maxi){
                    maxi = x;
                }
                if (x > 0)
                    allZero = false;

                arr[i] = x;   // fixed assignment
            }
        }

        if (allZero) {
            cout << count << endl;
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

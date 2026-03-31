#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isValid(int len, int zeroCount, int oneCount) {
    if (len % 2 == 0) {
        return zeroCount == oneCount;
    }
    return false;
}

void solve() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    int zeroCount = 0, oneCount = 0;

    for (char ch : s) {
        if (ch == '0')
            zeroCount++;
        else
            oneCount++;
    }

    int len = s.length();

    if (!isValid(len, zeroCount, oneCount)) {
        cout << -1 << endl;
        return;
    }

    vector<int> operations;

    const int LIMIT = 300;

    for (int step = 0; step < LIMIT; step++) {
        int left = 0;
        int right = s.length() - 1;
        bool inserted = false;

        while (left < right) {

            if (s[left] == '0' && s[right] == '0') {
                operations.push_back(right + 1);
                s.insert(right + 1, "01");
                inserted = true;
                break;
            }

            if (s[left] == '1' && s[right] == '1') {
                operations.push_back(left);
                s.insert(left, "01");
                inserted = true;
                break;
            }

            left++;
            right--;
        }

        if (!inserted) break;
    }

    if (operations.size() <= LIMIT) {
        cout << operations.size() << endl;
        for (int pos : operations) {
            cout << pos << " ";
        }
        cout << endl;
    }
}

int main() {

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }

    return 0;
}

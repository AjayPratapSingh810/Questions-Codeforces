#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        // max heap {count, char}
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], char('a' + i)});
            }
        }

        string ans = "";
        char last = '#';

        while (!pq.empty()) {
            auto [cnt1, ch1] = pq.top();
            pq.pop();

            if (ch1 != last) {
                // Best case: different from last
                ans += ch1;
                cnt1--;

                if (cnt1 > 0) pq.push({cnt1, ch1});
                last = ch1;
            } else {
                // Same as last → try second best
                if (pq.empty()) {
                    // No other choice → must repeat
                    ans += ch1;
                    cnt1--;

                    if (cnt1 > 0) pq.push({cnt1, ch1});
                    last = ch1;
                } else {
                    auto [cnt2, ch2] = pq.top();
                    pq.pop();

                    // Use second best
                    ans += ch2;
                    cnt2--;

                    if (cnt2 > 0) pq.push({cnt2, ch2});
                    pq.push({cnt1, ch1}); // push first back

                    last = ch2;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

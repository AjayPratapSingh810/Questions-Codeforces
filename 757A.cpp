#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Count frequency of each character
    unordered_map<char, int> mp;
    for (char ch : s) {
        mp[ch]++;
    }

    // Required characters and their counts in "Bulbasaur"
    unordered_map<char, int> required = {
        {'B', 1}, {'u', 2}, {'l', 1}, {'b', 1},
        {'a', 2}, {'s', 1}, {'r', 1}
    };

    int ans = INT_MAX;

    // Find min ratio of available / required
    for (auto &entry : required) {
        char ch = entry.first;
        int need = entry.second;
        if (mp[ch] < need) {
            cout << 0 << endl;
            return 0;
        }
        ans = min(ans, mp[ch] / need);
    }

    cout << ans << endl;
    return 0;
}

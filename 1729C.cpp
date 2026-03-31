#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        string s;
        cin >> s;
        int size = s.size();

        vector<int> arr(size);
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < size; i++) {
            int x = s[i] - 'a' + 1; // map 'a'->1, 'b'->2, etc.
            arr[i] = x;
            mp[x].push_back(i);
        }

        int x = arr[0];
        int y = arr[size - 1];
        vector<int> a;

        for (int i = 0; i < size; i++) {
            if ((arr[i] <= x && arr[i] >= y) || (arr[i] >= x && arr[i] <= y)) {
                a.push_back(arr[i]);
            }
        }

        int size2 = a.size();
        sort(a.begin(), a.end(), greater<int>());

        // for (int i = 0; i < size2; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        long long sum = 0;
        for (int i = 1; i < size2; i++) {
            sum += (a[i - 1] - a[i]);
        }

        cout << sum << " " << size2 << endl;

        if (x > y) {
            for (int i = 0; i < size2; i++) {
                vector<int> &a1 = mp[a[i]];
                for (int j = 0; j < (int)a1.size(); j++) {
                    cout << a1[j] + 1 << " ";
                }
                mp[a[i]].clear();
            }
        } else {
            for (int i = size2 - 1; i >= 0; i--) { 
                vector<int> &a1 = mp[a[i]];
                for (int j = 0; j < (int)a1.size(); j++) {
                    cout << a1[j] + 1 << " ";
                }
                mp[a[i]].clear();
            }
        }

        cout << endl;
    }

    return 0;
}

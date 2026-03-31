// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <chrono>

// using namespace std;

// /* -------- custom hash -------- */
// struct custom_hash {
//     static uint64_t splitmix64(uint64_t x) {
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }

//     size_t operator()(uint64_t x) const {
//         static const uint64_t FIXED_RANDOM =
//             chrono::steady_clock::now()
//                 .time_since_epoch()
//                 .count();
//         return splitmix64(x + FIXED_RANDOM);
//     }
// };
// /* -------------------------------- */

// int main() {

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int cases;
//     cin >> cases;

//     while (cases--) {

//         int n;
//         cin >> n;

//         vector<int> orgArr(n);
//         for (int i = 0; i < n; i++)
//             cin >> orgArr[i];

//         unordered_map<int, int, custom_hash> required;
//         unordered_set<int, custom_hash> track;

//         vector<int> changedArr(n);

//         for (int i = 0; i < n; i++) {
//             cin >> changedArr[i];

//             track.insert(changedArr[i]);

//             if (orgArr[i] != changedArr[i])
//                 required[changedArr[i]]++;
//         }

//         int m;
//         cin >> m;

//         unordered_map<int, int, custom_hash> available;

//         int lastColor;

//         for (int i = 0; i < m; i++) {
//             cin >> lastColor;
//             available[lastColor]++;
//         }

//         if (!track.count(lastColor)) {
//             cout << "No\n";
//             continue;
//         }

//         bool possible = true;

//         for (auto &p : required) {
//             if (available[p.first] < p.second) {
//                 possible = false;
//                 break;
//             }
//         }

//         cout << (possible ? "Yes\n" : "No\n");
//     }

//     return 0;
// }



//  ************************************************************************************
// https://codeforces.com/blog/entry/62393
//  ************************************************************************************

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        vector<int> orgArr(n);
        for (int i = 0; i < n; i++)
            cin >> orgArr[i];

        map<int, int> required;
        map<int, bool> track;
        bool lastExist = false;

        vector<int> changedArr(n);
        for (int i = 0; i < n; i++) {
            cin >> changedArr[i];
            track[changedArr[i]] = true;
            if (orgArr[i] != changedArr[i])
                required[changedArr[i]]++;
        }

        int m;
        cin >> m;

        map<int, int> available;
        int lastColor;

        for (int i = 0; i < m; i++) {
            cin >> lastColor;
            available[lastColor]++;
        }

        if (!track[lastColor]) {
            cout << "No\n";
            continue;
        }

        bool possible = true;

        for (auto &p : required) {
            if (available[p.first] < p.second) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes\n" : "No\n");
    }

    return 0;
}

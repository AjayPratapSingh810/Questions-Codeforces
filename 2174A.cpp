#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        string s, t;
        cin >> s >> t;

        vector<int> freq(26, 0);

        // Count frequency of characters in t
        for (char c : t) {
            freq[c - 'a']++;
        }
        bool impossible = false;
        for (char c : s) {
            if(freq[c - 'a'] == 0){
                impossible = true;
                cout << "Impossible" << endl;
                break;
            }
            freq[c - 'a']--;
        }
        if(impossible){
            continue;
        }
        string result = "";
        int index = 0;
        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;

            // If current char matches first char of s
            if (ch == s[index]) {
                for (int j = index;j<s.length();j++) {
                    if(s[j] <= ch){
                        result.push_back(s[j]);
                        index++;
                    }else{
                        break;
                    }
                }
            }
            if(freq[ch-'a'] > 0) {
                while (freq[i] > 0) {
                    result.push_back(ch);
                    freq[i]--;
                }
            }
        }
        cout << result << "\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        string s;
        cin >> s;
        bool found = false;

        // Check for three same adjacent characters
        if (s.length() >= 3) {
            for (int i = 0; i <= s.length() - 3; i++) {
                if (s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) {
                    cout << s.substr(i, 3) << endl;
                    found = true;
                    break;
                }
            }
        }

        // If not found, check for two same adjacent characters
        if (!found && s.length() >= 2) {
            for (int i = 0; i <= s.length() - 2; i++) {
                if (s[i] == s[i+1]) {
                    cout << s.substr(i, 2) << endl;
                    found = true;
                    break;
                }
            }
        }

        // If neither found
        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}

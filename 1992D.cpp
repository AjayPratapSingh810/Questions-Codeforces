#include <iostream>
#include <string>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int i = -1;
        int j = n;
        bool safe = true;

        while (i < j) {
            int x = i;
            int dest = -1;
            bool happn = false;

            // move up to m steps
            for (int step = 0; step < m; step++) {
                x++;
                if (x >= n || s[x] == 'L') {
                    happn = true;
                    dest = x;
                    break;
                }
            }

            if (!happn) {
                dest = x;
                if (x < n && s[x] == 'C') {
                    safe = false;
                } else {
                    if (k == 0) {
                        safe = false;
                    } else {
                        int swim = k;
                        while (swim--) {
                            x++;
                            if (x >= n || s[x] == 'L') {
                                dest = x;
                                break;
                            } else if (s[x] == 'C') {
                                safe = false;
                                break;
                            }
                        }
                    }
                }
            }

            if (!safe || dest == i) {
                i = -10;
                break;
            }
            i = dest;
        }

        if (i != j) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;
}

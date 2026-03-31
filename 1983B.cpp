#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        int n, m;
        cin >> n >> m;

        vector<int> aRow(n, 0), aCol(m, 0);
        vector<int> bRow(n, 0), bCol(m, 0);

        // Read matrix A
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++) {
                int x = row[j] - '0';  // parse each digit
                aRow[i] = (aRow[i] + x) % 3;
                aCol[j] = (aCol[j] + x) % 3;
            }
        }

        // Read matrix B
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++) {
                int x = row[j] - '0';  // parse each digit
                bRow[i] = (bRow[i] + x) % 3;
                bCol[j] = (bCol[j] + x) % 3;
            }
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (aRow[i] != bRow[i]) { possible = false; break; }
        }
        if (possible) {
            for (int j = 0; j < m; j++) {
                if (aCol[j] != bCol[j]) { possible = false; break; }
            }
        }

        cout << (possible ? "Yes\n" : "No\n");
    }
    return 0;
}
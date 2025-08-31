#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    
    while (cases--) {
        int n, k, q;
        cin >> n >> k >> q;
        
        vector<vector<int>> ans;
        vector<int> a;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            if (x <= q) {
                a.push_back(x);
            } else {
                if (a.size() >= k) {
                    ans.push_back(a);
                }
                a.clear(); // reset a
            }

            // ensure to process the last segment if needed
            if (i == n - 1) {
                if (a.size() >= k) {
                    ans.push_back(a);
                }
            }
        }

        long long count = 0;
        for (int i = 0; i < ans.size(); i++) {
            int size = ans[i].size();
            if (size >= k) {
                long long len = size - k + 1;
                count += (len * (len + 1)) / 2;
            }
        }

        cout << count << endl;
    }

    return 0;
}

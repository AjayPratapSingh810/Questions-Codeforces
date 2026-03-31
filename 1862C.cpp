#include <iostream>
#include <vector>
using namespace std;

// Helper to print a vector
void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

// Helper to compare vectors
bool areEqual(const vector<int>& a, const vector<int>& b) {
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> arr2(n);
        int x = n;
        int it = 0;
        int it2 = n-1;

        while (it < n) {
            int y = arr[it2--];
            while(it < n && y > it){
                arr2[it++] = x;
            }
            x--;
        }
        // Compare arrays
        if (areEqual(arr, arr2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

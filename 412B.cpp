// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr.begin(),arr.end());
    cout << arr[n-k] << endl;
    return 0;
}
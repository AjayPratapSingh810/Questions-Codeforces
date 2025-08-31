#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        sort(arr, arr + n);
        int j = n-1;
        while(n){
            if(arr[j--] <= n){
                cout << n+1 << endl;
                break;
            }
            n--;
        }
        if(n == 0){
            cout << 1 << endl;
        }
    }
    return 0;
}
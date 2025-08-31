#include <bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        if(n%2 == 0){
            cout << -1 << endl;
            continue;
        }else{
            cout << 1 << " ";
            while(n > 1){
                cout << n << " ";
                n--;
            }
            cout << endl;
        }
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        sort(arr.begin(),arr.end());
        long long s = 1;
        if(arr[0] != 1){
            cout << "No" << endl;
            continue;
        }
        bool done = false;
        for(int i = 1;i<n;i++){
            if(arr[i] > s){
                cout << "No" << endl;
                done = true;
                break;
            }else{
                s += arr[i];
            }
        }
        if(!done){
            cout << "Yes" << endl;
        }
    }
    return 0;
}
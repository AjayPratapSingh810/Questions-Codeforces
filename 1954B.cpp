// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
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
        int ans = n;
        int lst = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] != arr[0]){
                ans = min(ans, i-lst-1);
                lst = i;
            }
        }
        ans = min(ans,n-lst-1);
        if(ans == n){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
    }

    return 0;
}
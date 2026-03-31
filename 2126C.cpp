#include <bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int x = arr[k-1];
        sort(arr,arr+n);
        int water = 0;
        int i = 0;
        while(arr[i] < x){
            i++;
        }
        bool ans = true;
        for(i;i<n-1;i++){
            if(arr[i]-water < arr[i+1]-arr[i]){
                ans = false;
                break;
            }else{
                water += arr[i+1]-arr[i];
            }
        }
        if(!ans){
            cout << "NO" <<endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
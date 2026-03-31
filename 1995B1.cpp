// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        long long n, m;
        cin >> n >> m;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        sort(arr,arr+n);
        long long ans = INT_MIN;
        long long sum = 0;
        int i = 0;
        int j = 0;
        while(j < n){
            while(arr[j]-arr[i] > 1){
                sum -= arr[i++];
            }
            while(sum+arr[j] > m){
                sum -= arr[i++];
            }
            sum += arr[j++];
            if(sum > ans){
                ans = sum;
            }
        }
        // for(int i = 0;i<n;i++){
        //     long long sum = 0;
        //     for(int j = i;j<n;j++){
        //         if(arr[j]-arr[i] > 1 || sum+arr[j] > m){
        //             if(sum > ans){
        //                 ans = sum;
        //             }
        //             break;
        //         }else{
        //             sum += arr[j];
        //         }
        //     }
        //     if(sum > ans){
        //         ans = sum;
        //     }
        // }
        cout << ans << endl;
    }
    return 0;
}
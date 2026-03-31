// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

const long long MOD = 1e9 + 7;

// Safe modulo function (always returns 0 <= result < p)
long long mod(long long x, long long p) {
    return ((x % p) + p) % p;
}

int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n, k;
        cin >> n >> k;
        long long maxSum = 0;
        long long totalSum = 0;
        int arr[n];
        long long s = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
            totalSum += a;
            if(s+a <= 0){
                s = 0;
            }else{
                s += a;
                if(s > maxSum){
                    maxSum = s;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j = i;j<n;j++){
        //         s += arr[j];
        //         if(s > maxSum){
        //             maxSum = arr[j];
        //         }
        //     }
        // }
        while(k--){
            totalSum = mod(totalSum + maxSum, MOD);
            maxSum = mod(maxSum * 2, MOD);
        }
        cout << mod(totalSum, MOD) << "\n";
    }

    return 0;
}
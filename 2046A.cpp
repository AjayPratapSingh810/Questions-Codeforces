#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int arr1[n];
        int arr2[n];
        for(int i= 0;i<n;i++){
            int a;
            cin >> a;
            arr1[i]= a;
        }
        for(int i= 0;i<n;i++){
            int a;
            cin >> a;
            arr2[i]= a;
        }
        int maxi = INT_MIN;
        long long sum = 0;
        for(int i = 0;i<n;i++){
                if(arr1[i] > arr2[i]){
                    sum += arr1[i];
                    if(arr2[i] > maxi){
                        maxi = arr2[i];
                    }
                }else{
                    sum += arr2[i];
                    if(arr1[i] > maxi){
                        maxi = arr1[i];
                    }
                }
            
        }
        cout << sum+maxi << endl;
    }
}

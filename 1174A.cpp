// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[2*n];
    for(int i= 0;i<2*n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr,arr+2*n);
    long long sum1 = 0;
    long long sum2 = 0;
    for(int i= 0;i<n;i++){
        sum1 += arr[i];
    }
    for(int i= n;i<2*n;i++){
        sum2 += arr[i];
    }
    if(sum1 != sum2){
        for(int i= 0;i<2*n;i++){
            cout << arr[i] << " ";
        }
    }else{
        cout << -1;
    }cout << endl;
    return 0;
}
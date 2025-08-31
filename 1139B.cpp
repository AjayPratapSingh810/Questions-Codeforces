// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i= 0;i<n;i++){
        long long a;
        cin >> a;
        arr[i] = a;
    }
    long long ans = arr[n-1];
    long long maxi = arr[n-1];
    for(long long j = n-2;j>= 0;j--){
        if(arr[j] < maxi && maxi > 0){
            maxi = arr[j];
            ans += maxi;
        }else if(maxi > 0){
            maxi--;
            ans += maxi;
        }
    }
    cout << ans << endl;
    return 0;
}
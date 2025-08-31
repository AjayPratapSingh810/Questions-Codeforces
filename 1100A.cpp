// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int positive = 0;
    int negative = 0;
    int arr[n];
    for(int i= 0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
        if(a == -1){
            negative++;
        }else{
            positive++;
        }
    }
    int ans  = INT_MIN;
    for(int i= 0;i<k;i++){
        int p = positive;
        int x = negative;
        for(int j=i;j<n;j=j+k){
            if(arr[j] == -1){
                x--;
            }else{
                p--;
            }
        }
        if(abs(x-p) > ans){
            ans = abs(x-p);
        }
    }
    cout << ans << endl;
    return 0;
}
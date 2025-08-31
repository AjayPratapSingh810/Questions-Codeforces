// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        long long n;
        cin >> n;
        long long rows[n];
        long long cols[n];
        long long min1 = INT_MAX;
        long long min2 = INT_MAX;
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            rows[i] = a;
            if(a < min1){
                min1 = a;
            }
        }
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            cols[i] = a;
            if(a < min2){
                min2 = a;
            }
        }
        long long ans1 = 0;
        long long ans2 = 0;
        for(int i= 0;i<n;i++){
            ans1 += min1+cols[i];    
        }
        for(int i= 0;i<n;i++){
            ans2 += min2+rows[i];
        }
        if(ans1 < ans2){
            cout << ans1 << endl;
        }else{
            cout << ans2 << endl;
        }
    }

    return 0;
}
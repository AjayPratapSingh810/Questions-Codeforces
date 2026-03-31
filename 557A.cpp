// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int min1, min2, min3;
    int max1, max2, max3;
    cin >> min1 >> max1;
    cin >> min2 >> max2;
    cin >> min3 >> max3;
    int ans1 = min1;
    int ans2 = min2;
    int ans3 = min3;
    long long ans = min1+min2+min3;
    if(ans < n){
        if(ans1 < max1){
            if(max1-ans1 <= n-ans){
                ans += max1-ans1;
                ans1 = max1;
            }else{
                ans1 += (n-ans);
                ans = n;
            }
        }
    }
    if(ans < n){
        if(ans2 < max2){
            if(max2-ans2 <= n-ans){
                ans += max2-ans2;
                ans2 = max2;
            }else{
                ans2 += (n-ans);
                ans = n;
            }
        }
    }
    if(ans < n){
        if(ans3 < max3){
            if(max3-ans3 <= n-ans){
                ans += max3-ans3;
                ans3 = max3;
            }else{
                ans3 += (n-ans);
                ans = n;
            }
        }
    }
    cout << ans1 << " " << ans2 <<" "<< ans3 << endl;
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k;
    int candies[n];
    
    for(int i= 0;i<n;i++){
        int c;
        cin >> c;
        candies[i] = c;
    }
    int ans = 0;
    for(int i= 0;i<n && k > 0;i++){
        int a = candies[i];
        if(a <= 0){
            cout << -1 << endl;
            return 0;
        }
        if(i< n-1 && a>8){
            candies[i+1] += (candies[i]-8);
            k-= 8;
        }else{
            if(a > 8){
                k -= 8;
            }else{
                k-= a;
            }
        }
        ans++;
    }
    if(k > 0){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        long long x;
        long long j;
        cin >> x >> j;
        long long ans = x;
        if((j/2)%2 == 1){
            if(x%2 == 0){
                ans++;
            }else{
                ans--;
            }
        }
        if(j % 2 == 1){
            if(ans%2 != 0){  
                ans += j;
            }else{
                ans -= j;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
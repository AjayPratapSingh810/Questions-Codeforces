// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        long long maxi = 0;
        long long ans = 0;
        for(int i= 0;i<n;i++){
            int a;
            cin >> a;
            if(a > 0 &&a > maxi){
                ans += a-maxi;
            }
            maxi = a;
        }
        cout << ans - 1 << endl;
    }
    return 0;
}
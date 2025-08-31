// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        int n;
        cin >> n;
        int ans = 0;
        int maxi = INT_MIN;
        for(int i= 0;i<n;i++){
            int a;
            cin >> a;
            if(a >= maxi){
                maxi = a;
            }else{
                ans++;
                maxi = INT_MIN;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
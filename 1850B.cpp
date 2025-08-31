#include <iostream>
#include <climits>
using namespace std;
int main() {
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        int n;
        cin >> n;
        int ans = -1;
        int highestQuality = INT_MIN;
        for(int j = 0;j<n;j++){
            int num;
            cin >> num;
            int q;
            cin >> q;
            
            if(num <= 10 && q > highestQuality){
                highestQuality = q;
                ans = j+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int x;
        cin >> x;
        int ans = 0;
        bool neg = false;
        while(x != 1){
            if(x%6 == 0){
                x /= 6;
            }else if(x%3 == 0){
                x *= 2;
            }else{
                cout << -1 << endl;
                neg = true;
                break;
            }
            ans++;
        }
        if(!neg){
            cout << ans << endl;
        }
    }
    return 0;
}
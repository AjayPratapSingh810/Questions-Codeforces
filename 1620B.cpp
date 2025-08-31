// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int x;
        int y;
        cin >> x;
        cin >> y;
        long long ans = 0;
        int k1;
        cin >> k1;
        int a = -1;
        int b = -1;
        for(int i = 0;i<k1;i++){
            int j;
            cin >> j;
            if(i == 0){
                a = j;
            }
            if(i == k1-1){
                b = j;
            }
        }
        long long area = 1LL * (b-a) * y;
        if(area > ans){
            ans = area;
        }
        
        // 2nd time
        int k2;
        cin >> k2;
        a = -1;
        b = -1;
        for(int i = 0;i<k2;i++){
            int j;
            cin >> j;
            if(i == 0){
                a = j;
            }
            if(i == k2-1){
                b = j;
            }
        }
        area = 1LL * (b - a) * y;

        if(area > ans){
            ans = area;
        }
        
        // 3rd time
        int k3;
        cin >> k3;
        a = -1;
        b = -1;
        for(int i = 0;i<k3;i++){
            int j;
            cin >> j;
            if(i == 0){
                a = j;
            }
            if(i == k3-1){
                b = j;
            }
        }
        area = 1LL * (b-a) * x;
        if(area > ans){
            ans = area;
        }
        
        // 4th time
        int k4;
        cin >> k4;
        a = -1;
        b = -1;
        for(int i = 0;i<k4;i++){
            int j;
            cin >> j;
            if(i == 0){
                a = j;
            }
            if(i == k4-1){
                b = j;
            }
        }
        area = 1LL * (b-a) * x;
        if(area > ans){
            ans = area;
        }
        
        cout << ans << endl;
    }

    return 0;
}
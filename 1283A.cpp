#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
     int ans = 0;
     int hr;
     int min;
     cin >> hr >> min;
     for(int i = hr;i<23;i++){
         ans += 60;
     }
     for(int i = min;i<60;i++){
         ans += 1;
     }
     cout << ans << endl;
    }
    return 0;
}
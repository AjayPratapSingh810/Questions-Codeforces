#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        int b;
        cin >> b;
        bool neg = false;
        if(a-b > 0){
            neg = true;
        }
        int ans = 0;
        int x = abs(a-b);
        for(int j = 10;j >= 1; j--){
            ans += x/j;
            x = x%j;
        }
        cout << ans << endl;
        
    }

    return 0;
}
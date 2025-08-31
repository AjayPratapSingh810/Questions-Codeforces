#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int b;
        cin >> b;
        int k;
        cin >> k;
        long long ans = a-b;
        int mul = k/2;
        ans = ans * mul;
        if(k % 2 == 1){
            ans += a;
        }
        cout << ans << endl;
    }
    return 0;
}
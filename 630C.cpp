// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1;i<=n;i++){
        long long sol = pow(2,i);
        ans += sol;
    }
    cout << ans << endl;
    return 0;
}
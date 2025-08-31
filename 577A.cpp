// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    long long n;
    long long x;
    cin >> n >> x;
    long long a = n;
    long long ans = 0;
    while(a){
        if(x%a == 0 && x/a <= n){
            ans++;
        }
        a--;
    }
    cout << ans << endl;
    return 0;
}
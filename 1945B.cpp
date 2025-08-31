// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long cases;
    cin >> cases;
    while(cases--){
        long long a;
        long long b;
        long long m;
        cin >> a >> b >> m;
        long long ans = 0;
        ans += m/a+1;
        ans += m/b+1;
        cout << ans << endl;
    }

    return 0;
}
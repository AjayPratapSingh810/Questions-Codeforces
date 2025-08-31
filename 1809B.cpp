// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        long long n;
        cin >> n;
        long long ans = sqrt(n);
        while (ans * ans > n){
            ans--;
        }
        while (ans * ans < n){
            ans++;
        }
        cout << ans-1 << endl;
    }
    return 0;
}
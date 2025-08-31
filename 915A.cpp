// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans = INT_MAX;
    for (int i = 0;i<n;i++){
        int a;
        cin >> a;
        if(k%a == 0 && k/a < ans){
            ans = k/a;
        }
    }
    cout << ans << endl;
    return 0;
}
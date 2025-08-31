// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin >> n;
    unordered_map<int,bool> mp;
    int ans = -1;
    for(int i= 0;i<n;i++){
        int a;
        cin >> a;
        if(a!=0 && mp[a-1] != true && ans == -1){
            ans = i+1;
        }
        mp[a] = true;
    }
    cout << ans << endl;
    return 0;
}
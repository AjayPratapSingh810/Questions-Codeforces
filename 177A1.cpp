// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<bool>> track(n,vector<bool>(n,false));
    int middle = n/2;
    int ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int a;
            cin >> a;
            if(i == middle || j == middle){
                ans += a; 
            }else if(i == j){
                ans += a;
            }else if(i+j+1 == n){
                ans += a;
            }
        }
    }
    
    cout << ans;

    return 0;
}
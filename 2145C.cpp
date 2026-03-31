// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int totalA = 0;
        int totalB = 0;
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            if(s[i] == 'a'){
                totalA++;
            }else{
                totalB++;
            }
        }
        if(totalA == totalB){
            cout << 0 <<endl;
            continue;
        }
        for(int i =0;i<n;i++){
            int a = totalA;
            int b = totalB;
            for(int j = i;j<n;j++){
                if(s[j] == 'a'){
                    a--;
                }else{
                    b--;
                }
                if(j-i+1 > ans){
                    break;
                }
                if(a == b){
                    if(ans > (n-a-b)){
                        ans = n-a-b;
                    }
                }
            }
        }
        if(ans == n){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
    }

    return 0;
}
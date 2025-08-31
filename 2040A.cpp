// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int answer = -1;
        for(int i = 0;i<n;i++){
            bool ans = true;
            for(int j= 0;j<n;j++){
                if(i == j){
                    continue;
                }
                if(abs(arr[i]-arr[j])%k == 0){
                    ans = false;
                    break;
                }
            }
            if(ans){
                answer = i+1;
                break;
            }
        }
        if(answer != -1){
            cout << "YES" << endl;
            cout << answer << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
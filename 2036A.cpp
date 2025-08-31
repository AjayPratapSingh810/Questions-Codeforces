#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        int arr[x];
        for(int j = 0;j<x;j++){
            int m;
            cin >> m;
            arr[j] = m;
        }
        bool ans = true;
        for(int j = 1;j<x;j++){
            if(!(abs(arr[j-1] - arr[j]) == 5 || abs(arr[j-1] - arr[j]) == 7)){
                ans = false;
            }
        }
        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
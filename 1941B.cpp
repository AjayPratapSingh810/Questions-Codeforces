// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int ans= false;
        for(int i= 1;i<n-1;i++){
            if (arr[i-1] < 0 || arr[i] < 2 * arr[i-1] || arr[i+1] < arr[i-1]) {
                cout << "NO" << endl;
                ans = true;
                break;
            }
            int x = arr[i-1];
            arr[i-1] -= x;
            arr[i] -= 2*x;
            arr[i+1] -= x;
        }
        if(ans){
            continue;
        }
        for(int i= 0;i<n;i++){
            if(arr[i] != 0){
                cout << "NO" << endl;
                ans = true;
                break;
            }
        }
        if(!ans){
            cout << "YES" << endl;
        }
    }

    return 0;
}
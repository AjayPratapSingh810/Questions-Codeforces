#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        int ans = -1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] != i){
                if(ans == -1){
                    ans = arr[i];
                } else {
                    ans = ans & arr[i];
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

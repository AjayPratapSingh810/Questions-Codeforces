#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int a;
        cin >> a;
        int arr[a];
        int ans = 0;
        for(int i = 0;i<a;i++){
            int b;
            cin >> b;
            arr[i] = b;
        }
        for(int i = 0;i<a-1;i++){
            int mini = min(arr[i],arr[i+1]);
            int maxi = max(arr[i],arr[i+1]);
            while(mini*2 < maxi){
                ans++;
                mini = mini*2;
            }
            
        }
        cout << ans << endl;
    }
    
    return 0;
}

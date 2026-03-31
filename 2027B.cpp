// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i= 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int ans = 0;
        for(int i= 0;i<n;i++){
            int count = 0;
            for(int j = i;j<n;j++){
                if(arr[j] <= arr[i]){
                    count++;
                }
            }
            ans = max(ans,count);
        }
        cout << n-ans << endl;
    }
    return 0;
}
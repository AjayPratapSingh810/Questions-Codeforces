// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 1;
    int ans = 1;
    int arr[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for(int i= 1;i<n;i++){
        if(arr[i] >= arr[i-1]){
            count++;
            if(count > ans){
                ans = count;
            }
        }else{
            count = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
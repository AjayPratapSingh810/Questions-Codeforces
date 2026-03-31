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
        long long sum = 0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
            sum += a;
        }
        if(sum%n != 0){
            cout << "No" <<endl;
            continue;
        }
        int x = sum/n;
        for(int i = 0;i<n-2;i++){
            int diff = abs(arr[i] - x);
            if(arr[i] > x){
                arr[i] -= diff;
                arr[i+2] += diff;
            }else if(arr[i] < x){ 
                arr[i] += diff;
                arr[i+2] -= diff;
            }
        }
        bool ans = true;
        for(int i= 0;i<n;i++){
            if(arr[i] != x){
                ans = false;
                break;
            }
        }
        if(ans){
            cout << "Yes" << endl;
        }else{
            cout << "No" <<endl;
        }
    }
    return 0;
}
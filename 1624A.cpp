#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        int arr[x];
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int j = 0;j<x;j++){
            int a;
            cin >> a;
            if(maxi < a){
                maxi = a;
            }
            if(mini > a){
                mini = a;
            }
            arr[j] = a;
        }
        
        cout << maxi-mini << endl;
    }

    return 0;
}
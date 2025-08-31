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
        int even = 0;
        int odd = 0;
        for(int j = 0;j<x;j++){
            if(arr[j]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        if(even < odd){
            cout << even << endl;
        }else{
            cout << odd << endl;
        }
    }
    return 0;
}
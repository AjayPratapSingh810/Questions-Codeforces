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
            arr[i] = i+1;
        }
        cout << n << endl;
        for(int i = 0;i<n;i++){
            swap(arr[0],arr[i]);
            for(int j =0;j<n;j++){
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
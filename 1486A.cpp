// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        bool neg = false;
        long long sum = 0;
        int need = 0;
        int arr[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        for(int i = 0;i<n;i++){
            need += i;
            sum += arr[i];
            if(need > sum){
                cout <<"No" << endl;
                neg = true;
                break;
            }
        }
        if(!neg){
            cout << "Yes" << endl;
        }
    }

    return 0;
}
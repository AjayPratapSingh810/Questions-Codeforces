// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        if(x == 3){
            cout << -1 << endl;
            continue;
        }
        if(x%2 ==0){
            for(int j = x;j>0;j--){
                cout << j << " ";
            }
        }else{
            int mid = x/2;
            int z = x;
            for(int j = mid;j>0;j--){
                cout << z-- << " "; 
            }
            for(int j = 1;j<= x-mid;j++){
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
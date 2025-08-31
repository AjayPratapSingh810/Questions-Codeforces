// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        if(n%2 == 1){
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(i == j || (i == (n-1-j)) || (i==0 && j == (n/2)) || (i == n-1 && j == (n/2)) || (j==0 && i == (n/2)) || (j == n-1 && i == (n/2))){
                        cout << 1 << " ";
                    }else{
                        cout << 0 << " ";
                    }
                }
                cout << endl;
            }
        }else{
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(i == j || (i == (n-1-j))){
                        cout << 1 << " ";
                    }else{
                        cout << 0 << " ";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
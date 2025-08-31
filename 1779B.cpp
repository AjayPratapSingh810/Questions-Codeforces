// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        if(n == 1 || n == 3){
            cout << "No" << endl;
        }
        else if(n%2 == 1){
            cout << "Yes" << endl;
            int b = n/2;
            int a = b-1;
            for(int i = 0;i<n;i++){
                if(i%2 == 0){
                    cout << a << " ";
                }else{
                    cout <<-b << " ";
                }
            }
        }else{
            cout << "Yes" << endl;
            for(int i = 0;i<n;i++){
                if(i % 2 == 0){
                    cout << 1 << " ";
                }else{
                    cout << -1 << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
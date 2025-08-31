// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    if(n >= 0){
        cout << n ;
        return 0;
    }else{
        if(n > -10){
            cout << 0 << endl;
        }else if(n == -10){
            cout << 0 << endl;
            return 0;
        }
        else{
            int a = abs(n%10);
            int b = abs((n%100)/10);
            if(a <= b){
                int ans = (n/100)*10 - a;
                cout << ans;
                return 0;
            }else{
                int ans = n/10;
                cout << ans;
                return 0;
            }
        }
    }

    return 0;
}
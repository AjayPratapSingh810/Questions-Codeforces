// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int X,Y,K;
        cin >> X >> Y >> K;
        int ans = min(X,Y);
        cout << "0 0 " << ans << " " << ans << endl;
		cout << "0 "<< ans <<" "<< ans << " 0" << endl;
    }

    return 0;
}
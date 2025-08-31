// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t, s, x;
    cin >> t >> s >> x;
    if(t == x){
        cout << "Yes" << endl;
        return 0;
    }
    t += s;
    while(t <= x){
        if(t == x || t+1 == x){
            cout << "Yes" << endl;
            return 0;
        }
        t += s;
    }
    cout << "No" << endl;
    return 0;
}
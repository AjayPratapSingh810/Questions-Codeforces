// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    bool done = false;
    while(cases--){
        string s;
        int a;
        int b;
        cin >> s;
        cin >> a;
        cin >> b;
        if(a >= 2400 && b > a){
            cout << "Yes" << endl;
            done = true;
            break;
        }
    }
    if(!done){
        cout << "No" << endl;
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    if(n == 0){
        cout << 0 << " " << 0 << " " << 0 << endl;
        return 0;
    }
    if(n == 1){
        cout << 0 << " " << 0 << " " << 1 << endl;
        return 0;
    }
    int c = a+b;
    while(c < n){
        if(c+b == n){
            cout << a << " " << b << " " << b << endl;
            return 0;
        }
        int d = b+c;
        a = b;
        b = c;
        c = d;
    }
    cout << "I'm too stupid to solve this problem" << endl;
    return 0;
}13
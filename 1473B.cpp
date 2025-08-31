// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int lcmfunction(int a, int b) {
    
    // larger value
    int g = max(a, b);
    
    // Smaller value
    int s = min(a, b);
    
    for (int i = g; i <= a * b; i += g) {
        if (i % s == 0)
            return i;
    }
    return -1;
}
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        string s;
        string t;
        cin >> s >> t;
        int a = s.length();
        int b = t.length();
        int lcm = lcmfunction(a,b);
        string x = s;
        string y = t;
        while(x.length() < lcm){
            x += s;
        }
        while(y.length() < lcm){
            y += t;
        }
        if(x == y){
            cout << x << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}
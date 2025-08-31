// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int u = 0;
    int d = 0;
    int l = 0;
    int r = 0;
    for(int i = 0;i<n;i++){
        char ch = s[i];
        if(ch == 'U'){
            u++;
        }else if(ch == 'R'){
            r++;
        }else if(ch == 'D'){
            d++;
        }else{
            l++;
        }
    }
    ans  = 2*min(l,r);
    ans  += 2*min(u,d);
    cout << ans << endl;
    return 0;
}
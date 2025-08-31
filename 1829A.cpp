#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str = "codeforces";
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        int ans = 0;
        for(int j = 0;j<10;j++){
            if(s[j] != str[j]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        string ans = "";
        int size = s.length();
        if(size <= 10){
          cout << s <<endl;
          continue;
        };
        ans.push_back(s[0]);
        string xtra = "";
        int count = size-2;
        while(count){
            char a = count%10 + '0';
            xtra.push_back(a);
            count = count/10;
        }
        reverse(xtra.begin(),xtra.end());
        ans = ans+xtra;
        ans.push_back(s[size-1]);
        cout << ans << endl;
    }
    return 0;
}
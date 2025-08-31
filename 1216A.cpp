// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    int operations = 0;
    for(int i = 0;i<n;i=i+2){
        if(s[i] == 'a' && s[i+1] == 'a'){
            operations++;
            ans.push_back(s[i]);
            ans.push_back('b');
        }else if(s[i] == 'b' && s[i+1] == 'b'){
            operations++;
            ans.push_back('a');
            ans.push_back(s[i+1]);
        }else{
            ans.push_back(s[i]);
            ans.push_back(s[i+1]);
        }
    }
    cout << operations << endl;
    cout << ans << endl;

    return 0;
}
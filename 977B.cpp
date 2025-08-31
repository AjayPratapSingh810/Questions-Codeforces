// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string,int> mp;
    for(int i = 0;i<n-1;i++){
        string s2 = s.substr(i,2);
        mp[s2]++;
    }
    int maxi = -1;
    string ans = "";
    for(auto i: mp){
        if(i.second > maxi){
            maxi = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl;
    return 0;
}
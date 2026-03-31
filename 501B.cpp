// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int q;
    cin >> q;
    unordered_map<string,string> mp1;
    unordered_map<string,string> mp;
    vector<string> track;
    while(q--){
        string a;
        cin >> a;
        string b;
        cin >> b;
        mp1[a] = b;
        track.push_back(a);
    }
    for(auto i : mp1){
        string a = i.first;
        string b = i.second;
        mp[a] = b;
    }
    vector<pair<string, string>> order;
    for(auto i : track){
        string a = i;
        string b = mp[a];
        while(mp.find(b) != mp.end()){
            string c = mp[b];
            mp.erase(b);
            b = c;
        }
        if(mp.find(a) != mp.end() && a.length() > 0 && b.length() > 0){
            order.push_back({a, b}); 
        }
    }
    cout << order.size() << endl;
    for (int i = 0; i < order.size(); i++) {
        cout << order[i].first << " " << order[i].second << endl;
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    unordered_map<int,vector<int> > v;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        v[a].push_back(i+1);
    }
        if(v.size() < k){
            cout << "NO";
            return 0;
        }
    cout << "YES" << endl;
    vector<int> ans;
int count = 0;
for(auto i : v){
    ans.push_back(i.second[0]);
    count++;
    if (count == k) break;
}
    sort(ans.begin(),ans.end());
    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}
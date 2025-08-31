// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        int n;
        cin >> n;
        unordered_map<int,bool> mp;
        vector<int> arr;
        arr.push_back(1);
        for(int i = 2;i<=n;i++){
            if(mp[i] == false){
                mp[i] = true;
                arr.push_back(i);
                int x = i;
                while(2*x <= n){
                    if(mp[2*x] == false){
                        mp[2*x] = true;
                        arr.push_back(2*x);
                    }
                    x = x*2;
                }
            }
        }
        for(int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
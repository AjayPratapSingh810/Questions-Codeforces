// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        unordered_map<string,int> mp;
        vector<string> arr;
        for(int i = 0;i<n;i++){
            string a;
            cin >> a;
            arr.push_back(a);
            mp[a]++;
        }
        string ans = "";
        for(int i = 0;i<n;i++){
            string s = arr[i];
            bool done = false;
            for(int j = 0;j<s.length()-1;j++){
                int length = s.length();
                string s1 = s.substr(0,j+1);
                string s2 = s.substr(j+1,length-j+1);
                if(mp[s1] > 0 && mp[s2] > 0){
                    ans.push_back('1');
                    done = true;
                    break;
                }
            }
            if(!done){
                ans.push_back('0');
            }
        }
        cout << ans << endl;
    }

    return 0;
}
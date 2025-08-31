// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        string s;
        cin >> s;
        string t;
        cin >> t;
        vector<int> track(26,0);
        string seq;
        for(int i = 0;i<s.length();i++){
            int a = s[i] - 'a';
            track[a]++;
        }
        string ans;
        for(int i = 0;i<26;i++){
            if(track[i] > 0){
                char a = i+'a';
                int x= track[i];
                while(x--){
                    ans.push_back(a);
                }
                seq.push_back(a);
            }
        }
        string result = "";
        if(t == "abc" && track[0] > 0 && track[1] > 0 && track[2] > 0){
                        result += string(track[0], 'a');
            // Then c, then b
            result += string(track[2], 'c');
            result += string(track[1], 'b');
            // Then rest from d to z
            for (int i = 3; i < 26; i++) {
                result += string(track[i], char(i + 'a'));
            }
        }
        if(result == ""){
            cout << ans << endl;
        }else{
            cout<< result << endl;
        }
    }

    return 0;
}
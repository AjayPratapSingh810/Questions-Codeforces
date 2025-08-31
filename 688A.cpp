// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int number;
    cin >> number;
    int days;
    cin >> days;
    int ans = 0;
    int count = 0;
    while(days--){
        string s;
        cin >> s;
        bool win = false;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '0'){
                count++;
                if(count > ans){
                    ans = count;
                }
                win = true;
                break;
            }
        }
        if(!win){
            count = 0;
        }
    }
    cout << ans;
    return 0;
}
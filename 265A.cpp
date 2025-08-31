#include <iostream>
using namespace std;
int main() {
    string s;
    string t;
    cin >> s;
    cin >> t;
    int index = 0;
    for(int i= 0;i<t.length();i++){
        if(s[index] == t[i]){
            index++;
        }
    }
    cout << index+1;
    return 0;
}
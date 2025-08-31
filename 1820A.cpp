// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        string s;
        cin >> s;
        int count = 0;
        if(s[0] == '_'){
            count++;
        }
        for(int i = 1;i<s.length();i++){
            if(s[i-1] == '_' && s[i] == '_'){
                count++;
            }
        }
        int size = s.length();
        if(s[size-1] == '_'){
            count++;
        }else if(s[size-1] == '^' && size == 1){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
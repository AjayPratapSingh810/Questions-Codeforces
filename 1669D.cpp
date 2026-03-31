// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int blue = 0;
        int red = 0;
        bool ans = true;
        while(i < n){
            if(s[i] == 'W'){
                if((blue > 0 && red == 0) ||(red > 0 && blue == 0)){
                    ans = false;
                    break;
                }
                blue= 0;
                red = 0;
            }
            else if(s[i] == 'R'){
                red++;
            }else{
                blue++;
            }
            i++;
        }
        if((blue > 0 && red == 0) ||(red > 0 && blue == 0)){
            ans = false;
        }
        if(ans){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
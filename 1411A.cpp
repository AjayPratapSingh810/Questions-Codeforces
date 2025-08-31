// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int length;
        cin >> length;
        string s;
        cin >> s;
        int total = 0;
        for(int i = length-1;i>=0;i--){
            if(s[i] == ')'){
                total++;
            }else{
                break;
            }
        }
        if(length-total < total){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
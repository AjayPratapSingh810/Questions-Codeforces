// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string a;
    string c;
    
    cin >> a >> c;
    string b = "";
    for(int i = 0;i<a.length();i++){
        int x = a[i] - 'a';
        int y = c[i] - 'a';
        if(x < y){
            cout << -1 << endl;
            return 0;
        }else{
            char ch = y + 'a';
            b.push_back(ch);
        }
    }
    cout << b << endl;
    return 0;
}
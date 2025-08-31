// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> vec(10,"");
    vec[0] = "O-|-OOOO";
    vec[1] = "O-|O-OOO";
    vec[2] = "O-|OO-OO";
    vec[3] = "O-|OOO-O";
    vec[4] = "O-|OOOO-";
    vec[5] = "-O|-OOOO";
    vec[6] = "-O|O-OOO";
    vec[7] = "-O|OO-OO";
    vec[8] = "-O|OOO-O";
    vec[9] = "-O|OOOO-";
    if(n == 0){
        cout << vec[0] << endl;
    }
    while(n){
        int a = n%10;
        cout << vec[a] << endl;
        n = n/10;
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int x;
        int y;
        cin >> x >> y;
        if(x == 1 && y == 1){
            cout << 0 << endl;
            continue;
        }else if(x == 1 || y == 1){
            cout << 1 << endl;
            continue;
        }else{
            cout << 2 << endl;
        }
    }
    return 0;
}
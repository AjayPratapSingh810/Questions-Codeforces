#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int zeroLast = -1;
    int firstLast = -1;
    int i = 1;
    while(n--){
        int a;
        cin >> a;
        if(a == 0){
            zeroLast = i;
        }else{
            firstLast = i;
        }
        i++;
    }
    
    if(firstLast < zeroLast){
        cout << firstLast;
    }else{
        cout << zeroLast; 
    }

    return 0;
}
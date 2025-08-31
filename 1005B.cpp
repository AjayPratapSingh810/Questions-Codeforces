// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a >> b;
    
    int i = a.length()-1;
    int j = b.length()-1;
    
    while(i >= 0 && j >= 0){
        if(a[i] == b[j]){
            i--;
            j--;
        }else{
            break;
        }
    }
    int ans = (i+1) + (j+1);
    cout << ans << endl;
    return 0;
}
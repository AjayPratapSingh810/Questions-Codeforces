// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int people = 0;
    while(n--){
        char ch;
        cin >> ch;
        int a;
        cin >> a;
        if(ch == 'P'){
            people += a; 
        }else{
            if(people+1 <= a){
                cout << "Yes" << endl;
                people = 0;
            }else{
                people -= a;
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
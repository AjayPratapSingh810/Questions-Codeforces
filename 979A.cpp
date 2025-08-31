// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    long long n;
    cin >> n;
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    long long a = (n+1)%2;
    if(a == 0){
        cout << (n+1)/2 << endl;
    }else{
        cout << n+1 << endl;
    }
    return 0;
}
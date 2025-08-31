#include <iostream>
#include <climits>
using namespace std;
int main() {
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        int maxi = INT_MIN;
        int a;
        cin>>a;
        if(a > maxi){
            maxi = a;
        }
        int b;
        cin>>b;
        if(b > maxi){
            maxi = b;
        }
        int c;
        cin>>c;
        if(c > maxi){
            maxi = c;
        }
        
        int n;
        cin >> n;
        
        n -= (maxi-a);
        n -= (maxi-b);
        n -= (maxi-c);
        if(n < 0 || n % 3 != 0){
            cout<< "NO"<<endl;
        }else{
         cout << "YES"<<endl;   
        }
        
    }
    return 0;
}
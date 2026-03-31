// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        long long n;
        long long k;
        cin >> n >> k;
        vector<long long> ans(n,0);
        for(long long i= 0;i<n;i++){
            long long a;
            cin >> a;
            if(a%2 == 0){
                ans[i] = a;
            }else{
                if(k%2 == 0){
                    ans[i] = a + 2*k;
                }else{
                    ans[i] = a + k;
                }
            }
        }
        for(int c : ans){
            cout << c << " "; 
        }cout << endl;
    }
    return 0;
}
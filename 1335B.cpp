// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n , a , b;
        cin >> n >> a >> b;
        string ans = "";
        for(int i=0;i<b;i++){
            char ch = 'a'+i;
            ans.push_back(ch);
        }
        int x = 0;
        for(int i = b;i < a;i++){
            char ch = ans[x++];
            ans.push_back(ch);
        }
        x= 0;
        for(int i = a;i<n;i++){
            char ch = ans[x++];
            ans.push_back(ch);
        }
        cout << ans << endl;
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        int i = 0;
        int j = n-1;
        int pairs = 0;
        int oneinpair = 0;
        int zeroinpair = 0;
        int ones = 0;
        int zeros = 0;
        while(i < j){
            if(s[i] == s[j]){
                pairs++;
                if(s[i] == '1'){
                    oneinpair += 2;
                }else{
                    zeroinpair += 2;
                }
            }else{
                ones++;
                zeros++;
            }
            i++;
            j--;
        }
        if(pairs == k){
            cout << "Yes" << endl;
            continue;
        }else if(pairs < k){
            if(2*(zeros/2) >= k-pairs){
                cout << "Yes" << endl;
                continue;
            }
        }else{
            bool done = false;
            while(oneinpair && zeroinpair){
                oneinpair -= 2;
                zeroinpair -= 2;
                pairs -= 2;
                if(pairs == k){
                    cout << "Yes" << endl;
                    done = true;
                    break;
                }else if(pairs < k){
                    break;
                }
            }
            if(done){
                continue;
            }
        }
        cout << "No" << endl;
    }

    return 0;
}
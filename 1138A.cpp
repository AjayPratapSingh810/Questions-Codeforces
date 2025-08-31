// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int oneCount = 0;
    int twoCount = 0;
    int ans = -1;
    vector<int> count(n);
    int j = 0;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        if(a == 1){
            oneCount++;
            if(twoCount > 0){
                count[j++] = twoCount;
                twoCount = 0;
            }
        }else{
            twoCount++;
            if(oneCount > 0){
                count[j++] = oneCount;
                oneCount = 0;
            }
        }
    }
    if(oneCount > 0){
        count[j++] = oneCount;
        oneCount = 0;
    }
    if(twoCount > 0){
        count[j++] = twoCount;
        twoCount = 0;
    }
    for(int i = 0;i<n-1;i++){
        if(2*min(count[i],count[i+1]) > ans){
            ans = 2*min(count[i],count[i+1]);
        }
    }
    cout << ans << endl;
    return 0;
}
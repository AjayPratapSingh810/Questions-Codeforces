// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        vector<int> arr(n+1,0);
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[a]++;
        }
        int c= 0;
        for(int i = 0;i<=n;i++){
            if(arr[i] == 1){
                c++;
            }
            if(c == 2 || arr[i] == 0){
                cout << i << endl;
                break;
            }
        }
        
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        sort(arr.begin(),arr.end());
        int min1 = arr[0];
        int min2 = arr[1];
        cout << max(min1,min2-min1)<<endl;
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
  	return a > b;
}
int main() {
    int n;
    cin >> n;
    
    while(n--){
        int barrels;
        cin >> barrels;
        int operations;
        cin >> operations;
        
        vector<int> arr;
        for(int i = 0;i<barrels;i++){
            int a;
            cin >> a;
            arr.push_back(a);
        }
        long long total = 0;
        sort(arr.begin(),arr.end(),comp);
        for(int i = 0;i<=operations && i< barrels;i++){
            total += arr[i];
        }
        cout << total << endl;
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    unordered_map<int,int> mp;
    vector<int> vec(2*n,-1);
    for(int i = 0;i<2 * n;i++){
        int a;
        cin >> a;
        sum += a;
        vec[i] = a;
        mp[a]++;
    }
    int length = sum/n;
    for(int i = 0;i<2*n;i++){
        int a = vec[i];
        if(mp[a] > 0 && mp[length-a] > 0){
            cout << a <<" "<< length-a << endl;
            mp[a]--;
            mp[length-a]--;
        }
    }
    return 0;
}
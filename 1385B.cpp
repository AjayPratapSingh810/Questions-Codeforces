#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    for(int i = 0;i<n;i++){
        int size;
        cin>>size;
        int arr[2*size];
        unordered_map<int,bool> mp;
        for(int j = 0;j<2*size;j++){
            int a;
            cin >> a;
            arr[j] = a;
            mp[a] = true;
        }
        for(int j = 0;j<2*size;j++){
            if(mp[arr[j]]){
                cout << arr[j] << " ";
                mp[arr[j]] = false;
            }
        }
        cout << endl;
    }
    return 0;
}
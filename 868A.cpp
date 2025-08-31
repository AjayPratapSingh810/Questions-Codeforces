// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> arr(n);
    bool directPresent = false;
    for(int i = 0;i<n;i++){
        string a;
        cin >> a;
        arr[i] = a;
        if(a == s){
            directPresent = true;
        }
    }
    
    if(directPresent){
        cout << "Yes" << endl;
        return 0;
    }
    bool firstPresent = false;
    bool secondPresent = false;
    for(int i = 0;i<n;i++){
        string st = arr[i];
        if(st[1] == s[0]){
            firstPresent = true;
        }
        if(st[0] == s[1]){
            secondPresent = true;
        }
    }
    if(firstPresent && secondPresent){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
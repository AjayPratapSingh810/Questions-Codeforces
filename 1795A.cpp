// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    for(int i= 0;i<cases;i++){
        int size1;
        int size2;
        cin >> size1;
        cin >> size2;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        int total= 0;
        for(int j = 0;j<size1;j++){
            if(s1[j] == s1[j+1]){
                total++;
            }
        }
        if(s1[size1-1] == s2[size2-1]){
            total++;
        }
        for(int j = size2-1;j > 0;j--){
            if(s2[j] == s2[j-1]){
                total++;
            }
        }
        if(total > 1){
            cout << "NO"<<endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
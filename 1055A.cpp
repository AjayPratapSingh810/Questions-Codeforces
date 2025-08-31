// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    int s;
    cin >> n >> s;
    int track1[n];
    int track2[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        track1[i] = a;
    }
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        track2[i] = a;
    }
    if(track1[0] == 0 || (track1[s-1] == 0 && track2[s-1] == 0)){
        cout << "No" << endl;
        return 0;
    }
    if(track1[s-1] == 1){
        cout << "Yes" <<endl;
        return 0;
    }else{
        for(int i =s;i<n;i++){
            if(track1[i] == 1 && track2[i] == 1){
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }
    return 0;
}
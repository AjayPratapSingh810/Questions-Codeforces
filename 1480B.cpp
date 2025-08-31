// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int ha;
        int hh;
        int n;
        cin >> ha;
        cin >> hh;
        cin >> n;
        int ma[n];
        int mh[n];
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            ma[i] = a;
        }
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            mh[i] = a;
        }
        bool fail = false;
        for(int i = 0;i<n;i++){
            if(hh <= 0){
                fail = true;
                break;
            }
            int totalHAttacks = ceil(double(mh[i])/ha);
            int totalMAttacks = ceil(double(hh)/ma[i]);
            if(totalHAttacks > totalMAttacks){
                fail = true;
                break;
            }else{
                hh -= (totalHAttacks*ma[i]);
            }
        }
        if(fail == true){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}
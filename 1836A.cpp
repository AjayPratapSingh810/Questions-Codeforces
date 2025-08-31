// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int length;
        cin >> length;
        int maxi = INT_MIN;
        vector<int> vec(100,0);
        for(int i = 0;i<length;i++){
            int a;
            cin >> a;
            if(a > maxi){
                maxi = a;
            }
            vec[a]++;
        }
        bool negative = false;
        for(int i = 0;i<maxi;i++){
            if(vec[i] < vec[i+1]){
                negative = true;
                break;
            }
        }
        if(negative){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    for(int i= 0;i<cases;i++){
        int n;
        int s;
        cin >> n;
        cin >> s;
        int mid = n/2;
        if(n % 2 == 1){
            mid++;
        }
        int number = n-mid+1;
        cout << s/number << endl;
    }
    return 0;
}
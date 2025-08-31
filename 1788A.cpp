#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;

        int arr[x];
        int sum = 0;
        bool hasNegPair = false;
        bool hasNeg = false;

        for(int i = 0; i < x; i++) {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] == -1) hasNeg = true;
        }

        for(int i = 0; i < x - 1; i++) {
            if(arr[i] == -1 && arr[i+1] == -1) {
                hasNegPair = true;
                break;
            }
        }

        if(hasNegPair) sum += 4;
        else if(!hasNeg) sum -= 4;

        cout << sum << endl;
    }
    return 0;
}

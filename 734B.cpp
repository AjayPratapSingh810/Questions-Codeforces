#include <iostream>
using namespace std;
int main() {
    int twoDigit = 0;
    cin >> twoDigit;
    int threeDigit;
    cin >> threeDigit;
    int fiveDigit;
    cin >> fiveDigit;
    int sixDigit;
    cin >> sixDigit;
    long long ans = 0;
    while(twoDigit && fiveDigit && sixDigit){
        ans += 256;
        twoDigit--;
        fiveDigit--;
        sixDigit--;
    }
    while(twoDigit && threeDigit){
        ans += 32;
        twoDigit--;
        threeDigit--;
    }
    cout << ans;
    return 0;
}
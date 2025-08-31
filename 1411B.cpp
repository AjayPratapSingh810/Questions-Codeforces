#include <iostream>
using namespace std;

bool isValid(long long n) {
    long long x = n;
    while (x) {
        int d = x % 10;
        if(d == 0){
            x /= 10;
            continue;
        }
        if (n % d != 0) return false; // check zero or indivisible
        x /= 10;
    }
    return true;
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        long long n;
        cin >> n;
        while (!isValid(n)) {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    long long steps = 0;
    long long prev = 0;

    for (int i = 0; i < n; i++) {
        steps += abs(arr[i] - prev);
        prev = arr[i];
    }

    cout << steps << "\n";
    
    return 0;
}
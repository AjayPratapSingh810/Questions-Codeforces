// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    while(n--){
        int cards;
        cin >> cards;
        vector<int> arr(cards);
        for(int i = 0;i<cards;i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        int shuffling;
        cin >> shuffling;
        long long total = 0;
        for(int i =0;i<shuffling;i++){
            int a;
            cin >> a;
            total += a;
        }
        total = total%cards;
        cout << arr[total] << endl;
    }

    return 0;
}
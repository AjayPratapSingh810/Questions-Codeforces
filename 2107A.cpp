#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        int arr[x];
        for(int j = 0;j<x;j++){
            int a;
            cin >> a;
            arr[j] = a;
        }
        int min = INT_MAX;
        int max = INT_MIN;
        for(int j = 0;j<x;j++){
            if(arr[j] < min){
                min = arr[j];
            }
            if(arr[j] > max){
                max = arr[j];
            }
        }
        if(min == max){
            cout << "No" << endl;
            continue;
        }else{
            cout << "Yes "<< endl;
            for(int j = 0;j<x;j++){
                if(arr[j] < max){
                    cout << 1 << " ";
                }else{
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
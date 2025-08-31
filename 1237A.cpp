// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long positive = 0;
    long long negative = 0;
    int arr[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        if(a < 0){
            negative += a/2;
        }else{
            positive += a/2;
        }
        arr[i] = a;
    }
    if(positive < abs(negative)){
        for(int i = 0;i<n;i++){
            if(positive < abs(negative) && arr[i] > 0 && arr[i]%2 != 0){
                arr[i] = arr[i]/2+1;
                positive++;
            }else{
                arr[i] = arr[i]/2;
            }
        }
    }else if(positive > abs(negative)){
        for(int i = 0;i<n;i++){
            if(positive > abs(negative) && arr[i] < 0 && arr[i]%2 != 0){
                arr[i] = arr[i]/2-1;
                negative--;
            }else{
                arr[i] = arr[i]/2;
            }
        }
    }else{
        for(int i = 0;i<n;i++){
                arr[i] = arr[i]/2;
        }
    }
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}
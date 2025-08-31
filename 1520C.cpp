// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
        }else if(n == 2){
            cout << -1 << endl;
        }else{
            vector<vector<int> > arr(n,vector<int> (n));
            int x= 1;
            int a = 0;
            int b = 0;
            for(int i = 0;i<n;i++){
                arr[a++][b++] = x++;
            }
            for(int i = 1;i<n;i++){
                int a = i;int b = 0;
                while(a < n && b < n){
                    arr[a++][b++] = x++;
                }
                a = 0;b=i;
                while(a < n && b < n){
                    arr[a++][b++] = x++;
                }
            }
            for(int i= 0;i< n;i++){
                for(int j= 0;j<n;j++){
                    cout << arr[i][j] << " ";
                }cout << endl;
            }
        }
    }

    return 0;
}
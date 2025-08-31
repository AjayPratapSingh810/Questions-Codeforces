// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        int m;
        cin >> n;
        cin >> m;
        int arr[n][m];
        for(int i= 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }
        for(int i= 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int a = arr[i][j];
                if((i == 0 || (a > arr[i-1][j])) && (i == n-1 || (a > arr[i+1][j])) && (j == 0 || (a > arr[i][j-1])) && (j == m-1 || (a > arr[i][j+1]))){
                    int diff = INT_MAX;
                    if(i > 0 && (diff > (a-arr[i-1][j]))){
                        diff = a-arr[i-1][j];
                    }
                    if(i < n-1 && (diff > (a-arr[i+1][j]))){
                        diff = a-arr[i+1][j];
                    }
                    if(j > 0 && (diff > (a-arr[i][j-1]))){
                        diff = a-arr[i][j-1];
                    }
                    if(j < m-1 && (diff > (a-arr[i][j+1]))){
                        diff = a-arr[i][j+1];
                    }
                    arr[i][j] -= diff;
                }
            }
        }
        for(int i= 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
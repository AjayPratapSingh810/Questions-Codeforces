#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        int n, p;
        cin >> n >> p;
        string s;
        cin >> s;

        int leftWalls = 0, rightWalls = 0;
        int leftTotal = p - 1;       // all cells to the left
        int rightTotal = n - p;      // all cells to the right

        for(int i = 0; i < p-1; i++)
            if(s[i] == '#') leftWalls++;
        for(int i = p; i < n; i++)
            if(s[i] == '#') rightWalls++;

        if(min(leftWalls, rightWalls) == 0){
            cout << 1 << "\n";
        } else {
            cout << min(leftTotal, rightTotal) + 1 << "\n";
        }
    }
    return 0;
}
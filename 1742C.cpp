// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
       char board[8][8];
       for(int i = 0;i<8;i++){
           string s;
           cin >> s;
           for(int j = 0;j<8;j++){
               board[i][j] = s[j];
           }
       }
       for(int i = 0;i<8;i++){
           bool allR = true;
           for(int j = 0;j<8;j++){
               if(board[i][j] == 'B' || board[i][j] == '.'){
                   allR = false;
                   break;
               }
           }
           if(allR){
               cout << 'R' << endl;
               break;
           }
       }
        for(int i = 0;i<8;i++){
           bool allB = true;
           for(int j = 0;j<8;j++){
               if(board[j][i] == 'R' || board[j][i] == '.'){
                   allB = false;
                   break;
               }
           }
           if(allB){
               cout << 'B' << endl;
               break;
           }
       }
    }

    return 0;
}
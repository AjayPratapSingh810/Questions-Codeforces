#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int a;
        cin >> a;
        int total = 0;
        int maxi = 0;
        
        for (int i = 0; i < a; i++) {
            string row;
            cin >> row;
            int count = 0;
            for(int j=0;j<row.length();j++){
                char ch = row[j];
                if(ch == '1'){
                    count++;
                }
            }
            if(count > maxi){
                maxi = count;
            }
            total += count;
        }

        if (maxi * maxi == total) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }
    
    return 0;
}

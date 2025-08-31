// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string f;
    string m;
    string s;
    
    cin >> f >> m >> s;
    
    if((f == "rock" && m == "scissors" && s == "scissors") || (f == "scissors" && m == "paper" && s == "paper") || (f == "paper" && m == "rock" && s == "rock")){
        cout << 'F' << endl;
    }else if((m == "rock" && f == "scissors" && s == "scissors") || (m == "scissors" && f == "paper" && s == "paper") || (m == "paper" && f == "rock" && s == "rock")){
        cout << 'M' << endl;
    }else if((s == "rock" && m == "scissors" && f == "scissors") || (s == "scissors" && m == "paper" && f == "paper") || (s == "paper" && m == "rock" && f == "rock")){
        cout << 'S' << endl;
    }else{
        cout << '?' << endl;
    }
    return 0;
}
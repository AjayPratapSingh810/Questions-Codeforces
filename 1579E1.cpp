// Online C++ compiler to run C++ program online
#include <iostream>
#include <deque>
using namespace std;
int main() {
    // Write C++ code here
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        cin >> n;
        deque<int> dq;
        for(int i= 1;i<= n;i++){
            int a;
            cin >> a;
            if(dq.empty()){
                dq.push_back(a);
            }else{
                if(dq.front() > a){
                    dq.push_front(a);
                }else{
                    dq.push_back(a);
                }
            }
        }
        for (int val : dq) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
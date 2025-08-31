// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // dimension
    int ax,ay; // dimension of queen
    cin >> ax >> ay;
    int bx,by; // dimension of king
    cin >> bx >> by;
    int cx,cy; // target dimension of king
    cin >> cx >> cy;
    
    if((bx < ax && cx > ax) || (bx > ax && cx < ax) || (by < ay && cy > ay) || (by > ay && cy < ay)){
        cout << "No" <<endl;
    }else{
        cout << "Yes" << endl;
    }
    
    return 0;
}
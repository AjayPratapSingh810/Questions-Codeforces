// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <queue>
// #include <climits>
// using namespace std;
// int main() {
//     int cases;
//     cin >> cases;
//     while(cases--){
//         int n , k;
//         cin >> n >> k;
//         priority_queue<int>pq;
//         int mini = INT_MAX;
//         for(int i = 0;i< n;i++){
//             int a;
//             cin >> a;
//             if(a < mini){
//                 mini = a;
//             }
//             pq.push(a);
//         }
//         string ans = "Tom";
//         while(!pq.empty()){
//             int a = pq.top();
//             pq.pop();
//             a--;
//             if(a > 0){
//                 if(a < mini){
//                     mini = a;
//                 }
//                 pq.push(a);
//             }
//             if(pq.empty()){
//                 cout << ans << endl;
//                 break;
//             }
//             else if(pq.top()-mini > k){
//                 if(ans == "Tom"){
//                     cout << "Jerry" <<endl;
//                 }else{
//                     cout << "Tom" << endl;
//                 }
//                 break;
//             }
//             if(ans == "Tom"){
//                 ans = "Jerry";
//             }else{
//                 ans = "Tom";
//             }
//         }
//     }

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <climits>
#include <vector>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--){
        int n , k;
        cin >> n >> k;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        long long sum = 0;
        vector<int> arr(n);
        for(int i = 0;i< n;i++){
            int a;
            cin >> a;
            arr[i] = a;
            if(a > maxi){
                maxi = a;
            }
            if(a < mini){
                mini = a;
            }
            sum += a;
        }
        int cntMx = 0;
        for (auto x : arr) if (x == maxi) ++cntMx;
        if(maxi-1-mini > k || (maxi-mini == k+1 && cntMx >= 2)){
            cout << "Jerry" << endl;
        }else{
            if(sum%2 == 0){
                cout << "Jerry" <<endl;
            }else{
                cout << "Tom" << endl;
            }
        }
    }

    return 0;
}
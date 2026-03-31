// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int cases;
//     cin >> cases;

//     while (cases--) {
//         int n;
//         cin >> n;

//         vector<int> a(n), b(n);

//         for (int &x : a) cin >> x;
//         for (int &x : b) cin >> x;

//         vector<int> ans;

//         for (int i = 0; i < n; i++) {
//             bool ok = true;

//             for (int j = 0; j < n; j++) {
//                 if (i == j) continue;

//                 if (a[i] - a[j] < b[i] - b[j]) {
//                     ok = false;
//                     break;
//                 }
//             }

//             if (ok) ans.push_back(i + 1);
//         }

//         cout << ans.size() << endl;

//         for (int x : ans) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int a[N],b[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        int mx=INT_MIN;
        for(int i=1;i<=n;i++)mx=max(mx,a[i]-b[i]);
        int c=0;
        for(int i=1;i<=n;i++)c+=(a[i]-b[i]==mx);
        cout<<c<<"\n";
        for(int i=1;i<=n;i++)if(a[i]-b[i]==mx)cout<<i<<' ';
        cout<<"\n";
    }
}
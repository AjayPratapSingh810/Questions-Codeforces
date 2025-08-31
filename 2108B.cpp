#include "bits/stdc++.h"
#define int long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define em emplace_back
#define mp make_pair
#define F first
#define S second

using namespace std;
template<class C>
using vec = vector<C>;
using vi = vector<int>;
using vpi = vector<pair<int, int>>;
using pii = pair<int, int>;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int bal = 0;
  for (int i = 1; i + 1 < n; i++) {
    if (s[i] == '(') bal++;
    else bal--;
    if (bal < 0) {
      cout << "YES\n";
      return;
    }
  }
  if (bal == 0) {
    cout << "NO\n";
  }
}

signed main() {
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
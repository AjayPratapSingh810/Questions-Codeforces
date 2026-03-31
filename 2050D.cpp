// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        string s;
        cin >> s;

        int n = s.length();
        int i = n - 2;

        string str = "";
        while (i >= 0) {
            int leftDigit  = s[i] - '0';
            int rightDigit = s[i + 1] - '0';
            if (leftDigit < rightDigit - 1) {

                int j = i + 1;
                if(i > 0){
                    str = s.substr(0, i);
                }
                while (j < n &&
                       leftDigit < (s[j] - '0') - 1) {

                    int digit = (s[j] - '0') - 1;
                    char ch = digit + '0';   
                    str.push_back(ch);
                    j++;
                }
                str.push_back(s[i]);
                while (j < n) {
                    str.push_back(s[j]);
                    j++;
                }
                s = str;
            }
            i--;
            str = "";
        }

        cout << s << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        string s;
        cin >> s;

        int n = s.length();
        stack<int> st;

        for (int i = 0; i < n; ++i) {
            int digit = s[i] - '0';
            stack<int> temp;

            while (!st.empty() && digit - st.top() > 1) {
                int a = st.top();
                temp.push(a);
                st.pop();
                digit--;
            }

            st.push(digit);

            while (!temp.empty()) {
                st.push(temp.top());
                temp.pop();
            }
        }

        string ans;

        while (!st.empty()) {
            ans.push_back(char(st.top() + '0'));
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }

    return 0;
}

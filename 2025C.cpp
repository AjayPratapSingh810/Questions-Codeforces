#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases;
    cin >> cases;
    
    while (cases--) {
        int n, k;
        cin >> n >> k;
        if(n == k){
            cout << n << endl;
            continue;
        }
        unordered_map<int, int> countMap;
        vector<int> arr;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (countMap.find(a) == countMap.end()) {
                arr.push_back(a);
            }
            countMap[a]++;
        }
        
        sort(arr.begin(), arr.end());
        
        int size = arr.size();
        int left = 0;
        int windowSum = 0;
        int maxi = INT_MIN;
        
        for (int right = 0; right < size; right++) {
            windowSum += countMap[arr[right]];
            
            // If there's a gap between previous and current, reset window
            if (right > 0 && arr[right] - arr[right - 1] > 1) {
                windowSum = countMap[arr[right]];
                left = right;
            }
            
            // If window has more than k distinct values, shrink from left
            while (right - left + 1 > k) {
                windowSum -= countMap[arr[left]];
                left++;
            }
            
            if (windowSum > maxi) {
                maxi = windowSum;
            }
        }
        
        cout << maxi << "\n";
    }
    
    return 0;
}
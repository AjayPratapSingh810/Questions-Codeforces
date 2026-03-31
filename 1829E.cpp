#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> arr;
vector<vector<bool>> vis;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// DFS to calculate connected component sum
long long dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) return 0;
    if (vis[x][y] || arr[x][y] <= 0) return 0;

    vis[x][y] = true;
    long long sum = arr[x][y];

    for (int k = 0; k < 4; k++) {
        sum += dfs(x + dx[k], y + dy[k]);
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    while (cases--) {
        cin >> n >> m;

        arr.assign(n, vector<int>(m));
        vis.assign(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        long long maxSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && arr[i][j] > 0) {
                    maxSum = max(maxSum, dfs(i, j));
                }
            }
        }

        cout << maxSum << "\n";
    }

    return 0;
}

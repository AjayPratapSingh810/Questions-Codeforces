#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <queue>

using namespace std;

class GraphNode {
public:
    int node;
    int product;
    vector<GraphNode*> neighbors;

    GraphNode(int node,int product) {
        this->node = node;
        this->product = product;
    }

    void connect(GraphNode* node) {
        neighbors.push_back(node);
    }
};
void bfs(GraphNode* start,
         unordered_map<int,pair<int,int>>& distance,
         int n) {

    vector<bool> visited(n + 1, false);
    queue<pair<GraphNode*, int>> q;

    q.push({start, 0});
    visited[start->node] = true;

    while (!q.empty()) {
        auto [cur, d] = q.front();
        q.pop();

        if (!distance.count(cur->node))
            distance[cur->node] = {cur->product, d};

        for (auto nbr : cur->neighbors) {
            if (!visited[nbr->node]) {
                visited[nbr->node] = true;
                q.push({nbr, d + 1});
            }
        }
    }
}
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    unordered_map<int, GraphNode*> graph;
    for (int i = 1; i <= n; i++) {
        int prod;
        cin >> prod;
        graph[i] = new GraphNode(i, prod);
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u]->connect(graph[v]);
        graph[v]->connect(graph[u]);
    }
    // <node,pair<product,distance>>
    unordered_map<int,pair<int,int>> distance;
    vector<bool> visited(n + 1, false);
    bfs(graph[1], distance, n);
    vector<int> result(k + 1, -1);
    for(auto& entry : distance) {
        result[entry.second.first] = max(result[entry.second.first], entry.second.second);
    }
    for (int i = 1; i <= k; i++) {
        cout << result[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
const long long INF = 1e18; // Large value for infinity
vector<pair<int, long long>> v[N];
long long dis[N];

class cmp {
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src, int n) {
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty()) {
        pair<int, long long> parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long cost = parent.second;

        if (cost > dis[node]) continue;

        for (auto child : v[node]) {
            int childNode = child.first;
            long long childCost = child.second;

            if (cost + childCost < dis[childNode]) {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    // Reading the edges and building the graph
    for (int i = 0; i < e; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});  // Directed graph as implied by the problem
    }

    int src;
    cin >> src;

    // Initialize distances to infinity
    for (int i = 1; i <= n; i++) {
        dis[i] = INF;
    }

    // Perform Dijkstra's algorithm from the source node
    dijkstra(src, n);

    int t;
    cin >> t;  // Number of test cases

    // For each test case
    while (t--) {
        int dest;
        long long maxCost;
        cin >> dest >> maxCost;

        // If the shortest distance to the destination is less than or equal to maxCost
        if (dis[dest] <= maxCost) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

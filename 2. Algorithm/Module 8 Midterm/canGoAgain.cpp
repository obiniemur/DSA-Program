#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
long long dis[N]; 

int main() {
    int n, e;
    cin >> n >> e;
    
    vector<Edge> EdgeList;
    
    while (e--) {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src; 

    for (int i = 1; i <= n; i++) {
        dis[i] = LLONG_MAX; 
    }
    dis[src] = 0; 

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : EdgeList) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] != LLONG_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool negativeCycle = false;
    for (Edge ed : EdgeList) {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (dis[u] != LLONG_MAX && dis[u] + c < dis[v]) {
            negativeCycle = true;
            break;
        }
    }

    if (negativeCycle) {
        cout << "Negative Cycle Detected" << endl;
        return 0; 
    }

    int t;
    cin >> t; 

    while (t--) {
        int dest;
        cin >> dest;

        if (dis[dest] == LLONG_MAX) {
            cout << "Not Possible" << endl;
        } else {
            cout << dis[dest] << endl; 
        }
    }

    return 0;
}

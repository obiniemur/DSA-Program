#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = 1e18;

int main() {
    ll n, e;
    cin >> n >> e;

    vector<vector<ll>> adj(n, vector<ll>(n, INF));
    
    for (int i = 0; i < n; i++) {
        adj[i][i] = 0;
    }

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        adj[a][b] = min(adj[a][b], (ll)c);
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] < INF && adj[k][j] < INF) {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (adj[i][i] < 0) {
            cout << "Cycle detected" << endl;
            return 0;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;

        if (adj[x][y] == INF) {
            cout << -1 << endl;
        } else {
            cout << adj[x][y] << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool pathVisit[N];
bool ans;
vector<int> adj[N];

void dfs(int src) // lets assume src is parent here
{
    vis[src] = true;
    pathVisit[src] = true;

    for (int child : adj[src])
    {
        if (pathVisit[child]) // this logic check if the child i'm going to visit has path visited or not.

        {
            ans = true;
        }

        if (!vis[child])
        {
            dfs(child);
        }
    }

    // if the node can,'t go to next child in directed graph that mean cycle is not detected in this path
    // the recursion now go back and we will make the path false again
    pathVisit[src] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b); // directed graph
    }

    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "Cycle Detected" << endl;
    else
        cout << "cycle is not detected" << endl;
    return 0;
}
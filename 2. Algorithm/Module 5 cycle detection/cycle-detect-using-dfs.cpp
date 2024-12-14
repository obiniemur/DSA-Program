#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;
bool isCycleDetected;

void DFS(int src)
{
    vis[src] = true;

    for (int child : adj[src])
    {
        if (vis[child] && parentArray[src] != child)
        {
            isCycleDetected = true;
        }
        if (!vis[child])
        {
            parentArray[child] = src; // this will keep track of parent of child. here src is the parent.
            DFS(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    isCycleDetected = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            DFS(i);
        }
    }

    if (isCycleDetected)
    {
        cout << "Yes, Cycle Detected" << endl;
    }
    else
    {
        cout << "No, Cycle" << endl;
    }

    return 0;
}
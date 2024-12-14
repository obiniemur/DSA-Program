#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool detected;

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    parentArray[src] = src;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj[parent])
        {
            if (vis[child] && parentArray[parent] != child)
            {
                detected = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parentArray[child] = parent;
            }
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
    detected = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            BFS(i);
        }
    }

    if (detected)
        cout << "cycle detected" << endl;
    else
        cout << "not detected" << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;
bool isCycleDetected;

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj[parent])
        {
            if (vis[child] && parentArray[parent] != child)
            {
                isCycleDetected = true;
            }
            if (!vis[child])
            {
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
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
    isCycleDetected = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            BFS(i);
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
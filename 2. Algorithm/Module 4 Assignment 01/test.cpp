#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int level[1005];
bool vis[1005];
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = true;
    level[source] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {

                q.push(child);
                level[child] = level[par] + 1;
                vis[child] = true;
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
        long long int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    long long int q;
    cin >> q;
    while (q--)
    {
        long long int src, destination;
        cin >> src >> destination;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(src);

        if (level[destination] == 1 || level[destination] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
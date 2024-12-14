/*
Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. 
The source will be 0 always.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int level[1005];
bool vis[1005];

void level_Value(int num)
{
    int src = 0;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    level_Value(q);
    for (int i = 0; i < n; i++)
    {
        if (level[i] == q)
        {
            cout << i << endl;
        }
    }

    return 0;
}
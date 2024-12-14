#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int level[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        level[i] = 0;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}

void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (leaderA != leaderB)
    {
        if (level[leaderA] > level[leaderB])
        {
            par[leaderB] = leaderA;
        }
        else if (level[leaderA] < level[leaderB])
        {
            par[leaderA] = leaderB;
        }
        else
        {
            par[leaderA] = leaderB;
            level[leaderB]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    int cycle_count = 0;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        if (dsu_find(u) == dsu_find(v))
        {
            cycle_count++;
        }
        else
        {
            dsu_union_by_level(u, v);
        }
    }

    cout << cycle_count << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
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
    while (q--)
    {
        int no;
        cin >> no;
        bfs(no);
        sort(v[no].begin(), v[no].end(), greater<int>());
        if (v[no].size() > 0)
        {
            for (int child : v[no])
            {
                cout << child << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}
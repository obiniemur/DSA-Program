#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int source)
{
    cout << source << " "; // do the work on source
    vis[source] = true;    // make the source value to true, so that the recursion will not visit the value again

    for (int child : v[source])
    { // getting all the children of the source from array of vector above
        if (!vis[child])
        {

            dfs(child); // calling the recursion for child nodes
        }
    }
}

int main()
{
    int n, e; // input total nodes and edges
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b; // input individual nodes until the edge is zero
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis)); // making all the visited node to false before calling the DFS method
    dfs(0);                          // calling the DFS giving 0 as a source;
    return 0;
}
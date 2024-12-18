#include <bits/stdc++.h>
using namespace std;
char graph[1001][1001];
bool vis[1005][1005];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i]; // children er row
        int cj = sj + dy[i]; // children er column

        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            vis[ci][cj] = true;
            dfs(ci, cj);
        }
    }
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj]=true;


    while(!q.empty()){
        pair<int, int> node = q.front();
        q.pop();
        int nRow = node.first;
        int nCol = node.second;
        for (int i = 0; i < 4; i++)
    {
        int ci = nRow + dx[i]; // children er row
        int cj = nCol + dy[i]; // children er column

        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            vis[ci][cj] = true;
            q.push({ci, cj});
        }
    }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    // dfs(0, 2);

    // cout<<vis[2][2];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == '.' && vis[i][j] == false)
            {
                // dfs(i, j);
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
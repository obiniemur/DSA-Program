#include <bits/stdc++.h>
using namespace std;
char graph[1001][1001];
bool vis[1005][1005];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int level_or_distance[1001][1001];

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

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level_or_distance[si][sj]=0;

    while (!q.empty())
    {
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
                level_or_distance[ci][cj]=level_or_distance[nRow][nCol] + 1;
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

    int source_row, source_column;
    cin>>source_row>>source_column;
    int destination_row, destination_column;
    cin>>destination_row>>destination_column;

    bfs(source_row, source_column); // source node

    if (vis[destination_row][destination_column])
    {
        cout << "Shortest Path: " <<level_or_distance[destination_row][destination_column]<<endl;
    }
    else
    {
        cout << "jawa jabe na";
    }

    return 0;
}
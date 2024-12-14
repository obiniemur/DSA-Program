#include <bits/stdc++.h>
using namespace std;
char graph[1001][1001];
bool vis[1005][1005];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && (graph[x][y] == '.' || graph[x][y] == 'A' || graph[x][y] == 'B'))
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
           
            dfs(ci, cj);
             vis[ci][cj] = true;
        }
    }
}

int main()
{
   
    int sourceColumn;
    int sourceRow;
    int desCol;
    int desRow;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'A')
            {
                sourceRow = i;
                sourceColumn = j;
                
            }
            if (graph[i][j] == 'B')
            {
                desRow = i;
                desCol = j;
            }
        }
    }

    // cout<<graph[sourceRow][sourceColumn]<<endl;
    // cout<<graph[desRow][desCol]<<endl;

  

    dfs(sourceRow, sourceColumn); // source node

    if (vis[desRow][desCol])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
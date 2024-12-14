#include <bits/stdc++.h>
using namespace std;
bool vis[20][20];                                              // it will track node visit/cell visit in 2d
char a[20][20];                                                // all the char value of 2d grid
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // this is the pair to get right, left, top, down form the source cell
int n, m;                                                      // declaring the total row and total column globally

bool valid(int i, int j) // this function will make sure the traverse doesn't go to invalid cell. for example, if we have two row, it will not allow to go to third row
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}

main()
{
    cin >> n >> m; // input for row and column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj; // this is the source index of the 2d row, si mean source I, and sj mean source J;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis)); // making the vis array false initially
    dfs(si, sj);                     // calling DFS method to traverse the 2d grid,

    return 0;
}
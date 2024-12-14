#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;
char grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int n, m;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y]);
}

int dfs(int x, int y)
{
    visited[x][y] = true;
    int component_size = 1; 

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY))
        {
            component_size += dfs(newX, newY);
        }
    }

    return component_size;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            visited[i][j] = false; 
        }
    }

    int min_area = INT_MAX;
    bool found_component = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                found_component = true;
                int area = dfs(i, j);
                min_area = min(min_area, area);
            }
        }
    }

    // Output the result
    if (found_component)
    {
        cout << min_area << endl;
    }
    else
    {
        cout << -1 << endl; 
    }

    return 0;
}

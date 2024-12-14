#include <bits/stdc++.h>
using namespace std;

// Constants to define the maximum size of the grid
const int N = 1005;
char grid[N][N];   // The grid of cells (dots and dashes)
bool vis[N][N];    // Visited array to track visited cells
int n, m;          // Dimensions of the grid

// Directions for moving in the grid (Up, Down, Left, Right)
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Function to check if a given cell (x, y) is valid for traversal
bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y];
}

// DFS function to explore the grid
void dfs(int x, int y) {
    vis[x][y] = true;  // Mark the current cell as visited

    // Explore all four possible directions
    for (int i = 0; i < 4; i++) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        // If the new cell is valid, continue the DFS from there
        if (is_valid(new_x, new_y)) {
            dfs(new_x, new_y);
        }
    }
}

int main() {
    // Input dimensions of the grid
    cin >> n >> m;

    // Input the grid
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // Input start and end points
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    // If either start or end cell is blocked, output "NO"
    if (grid[r1][c1] == '-' || grid[r2][c2] == '-') {
        cout << "NO" << endl;
        return 0;
    }

    // Initialize the visited array to false
    memset(vis, false, sizeof(vis));

    // Perform DFS starting from (r1, c1)
    dfs(r1, c1);

    // Check if we reached the target cell (r2, c2)
    if (vis[r2][c2]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

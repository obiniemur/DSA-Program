#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

// Directions in the order right, left, up, down
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int N, M;
vector<vector<char>> maze;
pair<int, int> parent[1005][1005];
bool visited[1005][1005];

// BFS function to explore the maze
void bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;
    parent[startX][startY] = {-1, -1}; // Set the parent of the start as null

    bool found = false;
    int endX = -1, endY = -1;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        // Check if we've reached 'D'
        if (maze[x][y] == 'D') {
            found = true;
            endX = x;
            endY = y;
            break;
        }

        // Explore neighbors in right, left, up, down order
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // Check bounds and if the cell is traversable and unvisited
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] != '#' && !visited[nx][ny]) {
                q.push({nx, ny});
                visited[nx][ny] = true;
                parent[nx][ny] = {x, y}; // Record the parent for path reconstruction
            }
        }
    }

    // If path to 'D' is found, backtrack to mark the path
    if (found) {
        int curX = endX, curY = endY;
        while (parent[curX][curY] != make_pair(-1, -1)) {
            if (maze[curX][curY] != 'D' && maze[curX][curY] != 'R') {
                maze[curX][curY] = 'X';
            }
            auto [px, py] = parent[curX][curY];
            curX = px;
            curY = py;
        }
        maze[startX][startY] = 'R'; // Ensure the starting point remains 'R'
    }
}

int main() {
    cin >> N >> M;
    maze.resize(N, vector<char>(M));
    int startX, startY;

    // Reading the maze input
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
            if (maze[i][j] == 'R') {
                startX = i;
                startY = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    bfs(startX, startY);

    // Print the maze with the path
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}

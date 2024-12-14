#include <bits/stdc++.h>
using namespace std;

int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};

bool isValid(int x, int y, int N, int M) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

int bfs(int startX, int startY, int endX, int endY, int N, int M) {
    queue<pair<int, int>> q;
    vector<vector<int>> dist(N, vector<int>(M, -1));

    q.push({startX, startY});
    dist[startX][startY] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == endX && y == endY) {
            return dist[x][y];
        }

        for (int i = 0; i < 8; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isValid(newX, newY, N, M) && dist[newX][newY] == -1) {
                q.push({newX, newY});
                dist[newX][newY] = dist[x][y] + 1;
            }
        }
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int knightX, knightY;
        cin >> knightX >> knightY;

        int queenX, queenY;
        cin >> queenX >> queenY;

        int result = bfs(knightX, knightY, queenX, queenY, N, M);
        cout << result << endl;
    }

    return 0;
}

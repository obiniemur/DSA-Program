#include <bits/stdc++.h>
using namespace std;
char graph[1001][1001];
bool vis[1005][1005];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int count_of_apartmentRoom=0;

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

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj]=true;
    count_of_apartmentRoom++;


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
            count_of_apartmentRoom++;
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
    vector<int> apartment_sizes;


    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == '.' && vis[i][j] == false)
            {
                count_of_apartmentRoom=0;
                bfs(i, j);
                cnt++;
                apartment_sizes.push_back(count_of_apartmentRoom);
            }
        }
    }

    if (apartment_sizes.empty()) {
        cout << 0 << endl;  
    } else {
        sort(apartment_sizes.begin(), apartment_sizes.end());

        for (int size : apartment_sizes) {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N]; 

void bfs(int N)
{
    queue<int> q;

    q.push(1);
    vis[1] = true;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        if (curr == N)
        {
            cout << "YES" << endl;
            return;
        }

        int next1 = curr + 3;
        if (next1 <= N && !vis[next1])
        {
            q.push(next1);
            vis[next1] = true;
        }

        int next2 = curr * 2;
        if (next2 <= N && !vis[next2])
        {
            q.push(next2);
            vis[next2] = true;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        memset(vis, false, sizeof(vis)); 
        bfs(N);
    }
    return 0;
}

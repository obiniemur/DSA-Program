#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int mat[1005][1005];
int level[1005];
bool vis[1005];

int main()
{
    int n, e;
    cin >> n >> e;
     memset(mat, 0, sizeof(mat));

     while (e--)
    {
        int a, b;
        cin >> a >> b;
        
        mat[a][b] = 1;
        
    }


    int q;
    cin>>q;
    while(q--){
        int src, destination;
        
        cin>>src>>destination;
        if(src == destination) {
            mat[src][destination] = 1;
        }
        if (mat[src][destination] == 1)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
    }

   
    return 0;
}
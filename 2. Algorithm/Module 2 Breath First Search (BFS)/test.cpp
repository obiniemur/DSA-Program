//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> ve;
    bool visited[10005] = {false};

    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {

        queue<int> q;
        int src = V;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int par = q.front();
            q.pop();

            ve.push_back(par);

            for (auto child : adj[par])
            {
                // cout<<par<<" "<<child<<endl;
                if (!visited[child])
                {
                    q.push(child);
                     visited[child] = true;
                }
            }
        }

        return ve;
    }
};

//{ Driver Code Starts.
int main()
{
    // int tc;
    // cin >> tc;
    int V, E;
    cin >> V >>

        E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // 		adj[v].push_back(u);
    }
    // string s1;
    // cin>>s1;
    Solution obj;
    vector<int> ans = obj.bfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
// } Driver Code Ends
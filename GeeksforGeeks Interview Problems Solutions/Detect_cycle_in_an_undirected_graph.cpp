//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int vertex, int par, vector<int> g[], bool vis[]){
        /*Take action on vertex after entering the vertex*/
        vis[vertex] = true;
        bool isLoopExists = false;
        for(int child : g[vertex]){
            /*Take action on child before enetering the child node*/
            if(vis[child] && child == par) continue;
            if(vis[child]) return true;
            isLoopExists |= dfs(child, vertex, g, vis); //we have or-ing here, cause if any one of the child returns true for cycle, then it's true
            /*Take action on child after exiting child node*/
        }
        /*Take action on vertex before exiting the vertex*/
        return isLoopExists;
    }

    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+10];
        memset(vis, 0, sizeof(vis));
        for(int i=0;i<V;i++){
            if(vis[i]) continue; //to avoid starting dfs in the same visited connected components
            if(dfs(i,-1, adj, vis)){//by default sending 0 as parent as there was no 1 to 8 node in our example
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends

//INCORRECT solution
//This solution does not take into account disconnected graphs

class Solution {
  public:
  void dfs(vector<int> adj[], vector<int> &dfs_list, vector<bool> &vis, int root){
      if(vis[root]) return;
      
      vis[root] = true;
      dfs_list.push_back(root);
      
      for(int i=0; i<adj[root].size(); i++){
          if(!vis[adj[root][i]]) dfs(adj, dfs_list, vis, adj[root][i]);
      }
      
      return;
      
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> dfs_list;
        vector<bool> vis(V, false);
        
        dfs(adj, dfs_list, vis, 0);
        return dfs_list;
    }
};


//*********************


//CORRECT SOLUTION
class Solution {
  public:
  void dfs(vector<int> adj[], vector<int> &dfs_list, vector<bool> &vis, int root){
      if(vis[root]) return;
      
      vis[root] = true;
      dfs_list.push_back(root);
      
      for(auto i:adj[root]){
          if(!vis[i]) dfs(adj, dfs_list, vis, adj[root][i]);
      }
      
      return;
      
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> dfs_list;
        vector<bool> vis(V, false);
        
        for(int i=0;i<V;i++){ //THIS LINE MAKES SURE OF DISCONNECTED GRAPHS ALSO
        	if(!vis) dfs(adj, dfs_list, vis, 0);
        }
        
        return dfs_list;
    }
};
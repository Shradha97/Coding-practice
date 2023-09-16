// Inefficient solution using VISITED AND PROCESSING arrays
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(int V, vector<int>adj[],vector<int>&bfs_list,vector<int>&explored,int root){
        queue<int> nodes;
        vector<int> processing(V,0);
        nodes.push(root);
        processing[root]=1;
        
        while(!nodes.empty()){
            int ele = nodes.front();
            bfs_list.push_back(ele);
            
            for(auto i: adj[ele]){
                if(!explored[i] && !processing[i]){
                    nodes.push(i);
                    processing[i]=1;
                } 
            }
            nodes.pop();
            explored[ele]=1;
            processing[ele]=0;
        }
        
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>explored(V,0);
        vector<int>bfs_list;
        
        bfs(V,adj,bfs_list,explored,0);
        return bfs_list;
    }
};


//*************
//Efficient solution using just visited array

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<int>adj[],vector<int>&bfs_list,vector<int>&visited,int root){
        queue<int> nodes;
        nodes.push(root);
        visited[root]=1;
        
        while(!nodes.empty()){
            int ele = nodes.front();
            bfs_list.push_back(ele);
            
            for(auto i: adj[ele]){
                if(!visited[i]){
                    visited[i]=1;
                    nodes.push(i);
                }
            }
            nodes.pop();
        }
        
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>visited(V,0);
        vector<int>bfs_list;
        
        bfs(adj,bfs_list,visited,0);
        return bfs_list;
    }
};

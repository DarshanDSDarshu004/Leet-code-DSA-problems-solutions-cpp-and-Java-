class Solution {
public:
  void dfs(int start, vector<vector<int>>&adj,vector<int>&visited){
      
      visited[start]=true;
      int n=adj.size();
      for(int i=0;i<n;i++){
     
     if(adj[start][i]==1 && !visited[i]){
        dfs(i,adj,visited);
     }

      }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<int>visit(n,false);

        for(int i=0;i<n;i++){
            if(!visit[i]){
                dfs(i,isConnected,visit);
                count++;
            }
        }
      return count;

        
    }
};
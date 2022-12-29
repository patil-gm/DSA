// interative dfs
void dfs (int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj,vector<int> ans){

    stack<int> stack;
    stack.push(node);
 
    while (!stack.empty())
    {
        int s = stack.top();
        stack.pop();
 
        if (!visited[s])
        {
            ans.push_back(node);
            visited[s] = true;
        }

        for (auto it : adj[node]){
            if (!visited[it]) stack.push(it);
        }
      
    }
  
}
  

// recursive dfs
void dfs (int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj,vector<int> ans){
  ans.push_back(node);
  visited[node]=true;
  
// for every node make recusive call
for(auto it:adj[node]){
  if(!vidited[it]){
    dfs(it,visited,adj,ans)
   }
}
};




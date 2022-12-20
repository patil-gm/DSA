 

unordered_map< int , vector<int>> map; // this is the map of adj list


// following for loop storing the values in adjlist
        for(auto arr:edges){
            int u=arr[0];
            int v=arr[1];
            map[u].push_back(v);
            map[v].push_back(u);
        }


// visited array keeping track of visited vertex
        vector<bool> visited(n+1,false);

  

// THE MAIN BFS CODE ********

        queue<int> q;
        q.push(start);
        visited[start]=true;

        while(!q.empty()){
            int curr=q.front();
            q.pop();
          
            for(int i=0;i<map[curr].size();i++){
                if(visited[map[curr][i]]==false){q.push(map[curr][i]); visited[map[curr][i]]=true;}
            }
        }

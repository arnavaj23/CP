vi vis;
vvi graph;
void dfs(ll vertex){

    // operation before entering vertex;
    for(auto child:graph[vertex]){

        // operation before entering child
        if(!vis[child]){
            dfs(child);
        }

        //operation after exiting child
    }

    //operation after exiting vertex
    return;
}

void solve()
{   ll nodes;
    cin>>nodes;
    ll edge;
    cin>>edge;
    
    vis.resize(nodes,0);
    graph.resize(nodes);
   
    f(i,0,edge){
        ll a,b;
        cin>>a>>b;
        graph[a].PB(b);
        graph[b].PB(a);
    }
    for(auto vertex:graph){
        if(!vis[vertex[0]]){
            dfs(vertex[0]);
        }
        else return;
    }
    return;
}

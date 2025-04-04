void bfs_min_distance(int start, vector<vector<int>>& adj, int n) {
    vector<int> distance(n + 1, -1); // -1 means unreachable
    vector<int> parent(n + 1, -1);   // To reconstruct path (optional)
    queue<int> q;

    distance[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();

        for (int v : adj[u]) {
            if (distance[v] == -1) { // Not visited yet
                distance[v] = distance[u] + 1;
                parent[v] = u;       // Optional
                q.push(v);
            }
        }
    }

    // Print distances
    cout << "Distance from node " << start << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        if (distance[i] != -1)
            cout << distance[i] << "\n";
        else
            cout << "Unreachable\n";
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    int start;
    cin >> start;

    bfs_min_distance(start, adj, n);
    return;
}

vector<ll> dijkstra(int n, int start, vector<vector<pii>> &adj) {
    vector<ll> dist(n + 1,INT_MAX);      // Distance from start to each node
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap: {dist, node}

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u=pq.top().second;
         pq.pop();
        if (d > dist[u]) continue; // Skip outdated entry

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> adj(n + 1); // 1-indexed

    for (int i = 0; i < m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        // For undirected graphs:
        // adj[v].push_back({u, w});
    }

    int start;
    cin >> start;

    vector<ll> dist = dijkstra(n, start, adj);
    
    return;
}

int n, m;

void sol() {
    while (cin >> n >> m) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0;
        for (int i = 0, a; i < m; i++) {
            cin >> in;
            pq.push(in);
        }
        while (pq.size() >= 2) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            ans += a + b;
            pq.push(a + b);
        }
        cout << ans << endl;
    }
}
int n;

void sol() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n < 4) {
			cout << -1 << endl;
			continue;
		}
		deque<int> dq{3, 1, 4, 2};
		
		for (int i = 5; i <= n; i++) {
			if (i % 2)
				dq.push_back(i);
			else
				dq.push_front(i);
		}
		
		for (int it: dq)
			cout << it << " ";
		cout << endl;
	}
}
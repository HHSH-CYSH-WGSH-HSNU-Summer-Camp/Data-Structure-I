void sol() {
	priority_queue<int, vector<int>, less<int>> left;
	priority_queue<int, vector<int>, greater<int>> right;
	
	int a;
	while (cin >> a && a) {
		if (left.empty() || a <= left.top())
			left.push(a);
		else
			right.push(a);
			
		while (left.size() > right.size()) {
			right.push(left.top());
			left.pop();
		}
		while (right.size() > left.size()) {
			left.push(right.top());
			right.pop();
		}
		if (left.size() == right.size())
			cout << (left.top() + right.top()) / 2 << endl;
		else
			cout << left.top() << endl;
	}
}
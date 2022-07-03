#define MAXN 1005

int n, m;
int x[MAXN];

void sol() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	
	stack<int> st, tmp, B;
	for (int i = 1; i <= n; i++) {
		if (i == x[B.size()]) {
			B.push(i);
			while (st.size() && st.top() == x[B.size()]) {
				B.push(st.top());
				st.pop();
			}
		}
		else
			st.push(i);
	}
		
	while (st.size()) {
		int now = st.top();
		st.pop();
		if (now == x[B.size()]) {
			B.push(now);
			while (tmp.size() && tmp.top() == x[B.size()]) {
				B.push(tmp.top());
				tmp.pop();
			}
		}
		else {
			tmp.push(now);
			if (tmp.size() > m) {
				cout << "no" << endl;
				return;
			}
		}
	}
	while (tmp.size() && tmp.top() == x[B.size()]) {
		B.push(tmp.top());
		tmp.pop();
	}
	
	if (B.size() == n)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}
#define MAXN 105

int n, m;
bool odd[MAXN];
string x, s[MAXN];

void sol() {
	cin >> n >> m;
	for (int i = n - 1; i >= 0; i--) {
		cin >> s[i];
		int cnt = 0;
		for (char c: s[i])
			cnt += (c - '0');
		odd[i] = cnt % 2;
	}
	cin >> x;
	deque<char> dq;
	for (char c: x)
		dq.push_back(c);
		
	for (int i = 0; i < n; i++) {
		deque<char> tmp;
		for (int j = m - 1; j >= 0; j--) {
			if (s[i][j] - '0') {
				tmp.push_back(dq.back());
				dq.pop_back();
			}
			else {
				tmp.push_front(dq.back());
				dq.pop_back();
			}
		}
		if (odd[i])
			for (int j = 0; j < m / 2; j++)
				swap(tmp[j], tmp[j + (m + 1) / 2]);
		dq = tmp;
	}
	for (int i = 0; i < m; i++)
		cout << dq[i];
	cout << endl;
}

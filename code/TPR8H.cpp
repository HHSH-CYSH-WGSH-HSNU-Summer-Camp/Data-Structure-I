#define MAXN 200005

int n, m;
int x[MAXN];

void sol() {
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		mp[x[i]] = 0;
	}
	int cnt = 0;
	for (auto &it: mp) {
		it.second = ++cnt;
	}
	
	for (int i = 0; i < n; i++)
		cout << mp[x[i]] << " ";
	cout << endl;
}
#define MAXN 2505

int n;
bitset<MAXN> Friend[MAXN];

void sol() {
	cin >> n;
	for (int i = 1, d; i <= n; i++) {
		cin >> d;
		for (int j = 0, f; j < d; j++) {
			cin >> f;
			Friend[i][f] = true;
		}
	}
	
	int ans = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++)
			ans += (Friend[i] & Friend[j]).any() != 0;
	}
	cout << ans << endl;
}
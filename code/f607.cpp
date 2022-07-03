#define MAXN 200005

int n, l;
int x[MAXN];

void sol() {
	cin >> n >> l;
	set<int> st;
	int ans = 0;
	for (int i = 0, a, b; i < n; i++) {
		cin >> a >> b;
        x[b] = a;
	}
	st.insert(0);
	st.insert(l);
	for (int i = 1; i <= n; i++) {
		int nxt = *st.lower_bound(x[i]);
		int prv = *--st.upper_bound(x[i]);
		ans += nxt - prv;
		st.insert(x[i]);
	}
	cout << ans << endl;
}
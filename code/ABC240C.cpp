int n, m;
bitset<20000> vis[101];
 
void sol()
{
	cin >> n >> m;
	vis[0][0] = 1;
	for (int i = 1, a, b; i <= n; i++) {
		cin >> a >> b;
		vis[i] = vis[i - 1] << a | vis[i - 1] << b;
	}
	if (vis[n][m])
		cout << "Yes" << endl;
	else cout << "No" << endl;
}
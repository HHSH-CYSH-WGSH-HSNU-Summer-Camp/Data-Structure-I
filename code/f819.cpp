int n, m;

void sol()
{
	cin >> n;
	vector<int> v;
	int sum = 0;
	for(int i = 0, a, b; i < n; i++) {	
		cin >> a >> b;
		if(b > 100) {
			sum += 5 * (b - 100);
			v.push_back(a);
		}
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
    cout << sum << endl;
}
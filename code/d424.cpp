vector<pair<int, int>> v, ans;
multiset<int, greater<int>> st;

void sol() {
	int l, r, h;
	while (cin >> l >> h >> r) {
		if (l == r)
			continue;
		v.push_back({l, h});
		v.push_back({r, -h});
	}
	sort(v.begin(), v.end());
	
	st.insert(0);
	int height = 0;
	
	for (auto it: v) {
		if (it.second >= 0)
			st.insert(it.second);
		else if (st.find(-it.second) != st.end())
			st.erase(st.find(-it.second));
		if (ans.empty() || it.first != ans.back().first)	
			ans.push_back({it.first, *st.begin()});
		else
			ans[ans.size() - 1] = {it.first, *st.begin()};
	}
	for (auto it: ans) {
		if (it.second != height)
			cout << it.first << " " << it.second << " ";
		height = it.second;
	}
	cout << endl;
}
void sol() {
	set<int> st;
	st.insert(1);
	int cnt = 0;
	
	for (auto it = st.begin(); it != st.end(); it++) {
		++cnt;
		if (cnt == 1500) {
			cout << "The 1500'th ugly number is " << *it << "." << endl;
			return;
		}
		st.insert(*it * 2);
		st.insert(*it * 3);
		st.insert(*it * 5);
	}
}
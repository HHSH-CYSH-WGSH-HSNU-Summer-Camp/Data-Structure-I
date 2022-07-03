int n, m;

void sol() {
	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s);
		stack<char> st;
		bool yes = 1;
		for (char c: s) {
			if (c == '(' || c == '[')
				st.push(c);
			if (c == ')') {
				if (st.empty() || st.top() != '(')
					yes = 0;
				else
					st.pop();
			}
			if (c == ']') {
				if (st.empty() || st.top() != '[')
					yes = 0;
				else
					st.pop();
			}
		}
		yes &= st.empty();
		if (yes)
			cout << "Yes" << endl;
		else	
			cout << "No" << endl;
	}
}
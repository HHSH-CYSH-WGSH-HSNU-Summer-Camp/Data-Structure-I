#define MAXN 200005

int n, m;
int x[MAXN];

void balance(multiset<int, greater<int>> &left, multiset<int, less<int>> &right) {
	while (left.size() > right.size()) {
		right.insert(*left.begin());
		left.erase(left.begin());
	}
	while (right.size() > left.size()) {
		left.insert(*right.begin());
		right.erase(right.begin());
	} 
	return;
}	

void sol() {
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
		cin >> x[i];
	
	multiset<int, greater<int>> left;
	multiset<int, less<int>> right;
	
	for (int i = 0; i < n; i++) {
		if (!left.size() || x[i] <= *left.begin())
			left.insert(x[i]);
		else
			right.insert(x[i]);
			
		if (i >= m) {
			if (left.size() && x[i - m] <= *left.begin())
				left.erase(left.find(x[i - m]));
			else
				right.erase(right.find(x[i - m]));
		}
		balance(left, right);
		
		if (i >= m - 1)
			cout << *left.begin() << " ";
	}
	cout << endl;
}
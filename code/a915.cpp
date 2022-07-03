#define MAXN 1005

int n;
pair<int, int> p[MAXN];

void sol() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n);

    for (int i = 0; i < n; i++)
        cout << p[i].first << " " << p[i].second << endl;
}
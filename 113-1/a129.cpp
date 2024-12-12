#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define int long long
#define all(x) x.begin(), x.end()

struct SegmentTree {
	int n;
	vector<int> nodes;
	SegmentTree()
		: n(0) {
		nodes.clear();
	}
	SegmentTree(vector<int> &data)
		: n(data.size()) {
		nodes.resize(n * 4);
		build(data, 0, n);
	}
	void build(const vector<int> &data, int l, int r, int it = 1) {
		if (r - l == 1) {
			nodes[it] = data[l];
			return;
		}
		int mid = (l + r) / 2;
		build(data, l, mid, it * 2);
		build(data, mid, r, it * 2 + 1);
		nodes[it] = max(nodes[it * 2], nodes[it * 2 + 1]);
		return;
	}
	int query(int queryL, int queryR, int l, int r, int it = 1) {
		if (queryL == l && queryR == r) return nodes[it];
		int mid = (l + r) / 2;
		if (queryR <= mid) return query(queryL, queryR, l, mid, it * 2);
		else if (queryL >= mid) return query(queryL, queryR, mid, r, it * 2 + 1);
		else return max(query(queryL, mid, l, mid, it * 2), query(mid, queryR, mid, r, it * 2 + 1));
	}
}; // 線段樹硬炸 part3

struct Point {
    int x, y, v;
    int len() { return x*x + y*y; }
};

bool cmp(Point a, Point b) {
    if (!a.x && !a.y) return 1;
    if (!b.x && !b.y) return 0;
    if (a.x==1e4 && a.y==1e4) return 0;
    if (b.x==1e4 && b.y==1e4) return 1;
    return a.len() < b.len();
}

signed main() {
    fastio
    int n, x, y, v, ans=0;
    vector<Point> vp;
    vector<int> vv;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>x>>y>>v;
        vp.push_back({x, y, v});
    }
    sort(all(vp), cmp);
    for (Point &pt: vp) vv.push_back(pt.v);
    SegmentTree st(vv);
    for (int i=1; i<(int)vv.size(); i++) ans = max(ans, st.query(0, i, 0, vv.size())-vv[i]);
    cout<<ans<<"\n";
}
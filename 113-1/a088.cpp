#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define int long long

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
		nodes[it] = nodes[it * 2] * nodes[it * 2 + 1];
		return;
	}
	int query(int queryL, int queryR, int l, int r, int it = 1) {
		if (queryL == l && queryR == r) return nodes[it];
		int mid = (l + r) / 2;
		if (queryR <= mid) return query(queryL, queryR, l, mid, it * 2);
		else if (queryL >= mid) return query(queryL, queryR, mid, r, it * 2 + 1);
		else return query(queryL, mid, l, mid, it * 2) * query(mid, queryR, mid, r, it * 2 + 1);
	}
}; // 線段樹硬炸

signed main() {
    fastio
    int n, ans, index=0;
    while (cin>>n) {
        index++;
        ans = 0;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        SegmentTree st(v);
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<=n; j++) ans = max(ans, st.query(i, j, 0, n));
        }
        cout<<"Case #"<<index<<": The maximum product is "<<ans<<".\n\n";
    }
}

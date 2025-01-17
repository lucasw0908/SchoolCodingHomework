#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

int n, a, b, md=0;
pii mp = {0, 0};
vector<vector<int>> v;
vector<bool> vis;

void dfs(int p=0, int d=0) {
    if (d > mp.S) mp = {p, d};
    md = max(md, d);
    vis[p] = 1;
    for (int &i: v[p]) {
        if (vis[i]) continue;
        dfs(i, d+1);
    }
}

signed main() {
    fastio
    cin>>n;
    v.resize(n);
    vis.resize(n, 0);
    for (int i=0; i<n-1; i++) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs();
    vis.clear();
    vis.resize(n, 0);
    dfs(mp.F);
    cout<<md<<"\n";
}
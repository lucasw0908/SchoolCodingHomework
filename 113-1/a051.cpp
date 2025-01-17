#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

const int maxn = 1e4+5;
bool flag = 0;
vector<vector<int>> v(maxn);
vector<bool> vis(maxn, 0);

void dfs(int p, int t) {
    if (p == t) flag = 1;
    vis[p] = 1;
    for (int &i: v[p]) {
        if (vis[i]) continue;
        dfs(i, t);
    }
}

signed main() {
    fastio
    int n, m, a, b;
    cin>>n>>m;
    while (m--) {
        cin>>a>>b;
        v[a].push_back(b);
    }
    cin>>a>>b;
    dfs(a, b);
    cout<<((flag)?"Yes":"No");
}
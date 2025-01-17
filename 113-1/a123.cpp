#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

vector<vector<int>> v;

int dfs(int p, int d=0) {
    int md = d;
    for (int &i: v[p]) md = max(md, dfs(i, d+1));
    return md;
}

signed main() {
    fastio
    int n, m, k, r=0, ans=0;
    cin>>n;
    v.resize(n+1);
    for (int i=1; i<=n; i++) {
        r += i;
        cin>>m;
        while (m--) {
            cin>>k;
            v[i].push_back(k);
            r -= k;
        }
    }
    for (int i=1; i<=n; i++) ans += dfs(i);
    cout<<r<<"\n"<<ans<<"\n";
}
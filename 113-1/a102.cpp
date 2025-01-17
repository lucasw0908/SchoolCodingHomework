#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

const int maxn = 1e2+5;
const int mx[8] = {1, -1, 0, 0, 1, -1, -1, 1}, my[8] = {0, 0, 1, -1, 1, -1, 1, -1};

void dfs(vector<vector<bool>> &v, pii p={0, 0}) {
    v[p.F][p.S] = 0;
    for (int i=0; i<8; i++) {
        pii np = {p.F+mx[i], p.S+my[i]};
        if (np.F < 0 || np.S < 0 || !v[np.F][np.S]) continue;
        dfs(v, np);
    }
}

signed main() {
    fastio
    int n, m, ans;
    while (cin>>n>>m) {
        if (!n && !m) break;
        ans = 0;
        vector<vector<bool>> v(maxn, vector<bool>(maxn, 0));
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                char c;
                cin>>c;
                v[i][j] = (c == '@');
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (v[i][j]) dfs(v, {i, j}), ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

signed main() {
    fastio
    pii p1, p2;
    int n, m, t, ans=0;
    cin>>n>>m>>t;
    vector<vector<bool>> v(m, vector<bool>(n, 0));
    while (t--) {
        cin>>p1.F>>p1.S>>p2.F>>p2.S;
        p1.F--, p1.S--, p2.F--, p2.S--;
        if (p1.F == p2.F) {
            for (int i=min(p1.S, p2.S); i<=max(p1.S, p2.S); i++) {
                v[i][p1.F] = 1;
            }
        }
        else if (p1.S == p2.S) {
            for (int i=min(p1.F, p2.F); i<=max(p1.F, p2.F); i++) {
                v[p1.S][i] = 1;
            }
        }
        else {
            for (int i=0; i<=abs(p1.F-p2.F); i++) {
                int a=i, b=i;
                if (p1.F > p2.F) a = -a;
                if (p1.S > p2.S) b = -b;
                v[p1.S+b][p1.F+a] = 1;
            }
        }
    }
    for (vector<bool> i: v) {
        for (bool j: i) if (j) ans++;
    }
    cout<<ans<<"\n";
}
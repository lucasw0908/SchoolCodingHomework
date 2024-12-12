#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define pii pair<int, int>

signed main() {
    fastio
    int n, m;
    cin>>n;
    while (n--) {
        int ans = 0;
        cin>>m;
        vector<pii> v(m);
        for (int i=0; i<m; i++) cin>>v[i].F>>v[i].S;
        sort(all(v));
        for (int i=0; i<m; i++) if (binary_search(v.begin()+i+1, v.end(), pii(v[i].S, v[i].F))) ans++;
        cout<<ans<<"\n";
    }
}
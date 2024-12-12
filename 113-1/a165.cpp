#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define int long long
#define pii pair<int, int>
#define F first
#define S second

const int maxn = 1e4+5;

signed main() {
    fastio
    int n;
    vector<pii> vp(maxn);
    while (cin>>n) {
        if (!n) break;
        double ans = 1e4;
        for (int i=0; i<n; i++) {
            cin>>vp[i].F>>vp[i].S;
        }
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                ans = min(ans, sqrt(pow(vp[i].F-vp[j].F, 2)+pow(vp[i].S-vp[j].S, 2)));
            }
        }
        if (ans == 1e4) cout<<"INFINITY\n";
        else cout<<setprecision(4)<<fixed<<ans<<"\n";
    }
}
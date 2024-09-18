#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int l, n, ans=0;
    vector<int> p(1e4), q(1e4);
    cin>>l>>n;
    for (int i = 0; i < n; i++) cin>>p[i];
    for (int i = 0; i < n; i++) cin>>q[i];
    for (int i = 0; i < n; i++) {
        if (p[i] == l) ans += q[i];
    }
    cout<<ans;
}
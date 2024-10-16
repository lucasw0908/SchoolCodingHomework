#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

const int MAXN = 1e6+5;

signed main() {
    fastio
    vector<int> v(MAXN, 0);
    int n, q, s, t=0, ans=0; 
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>q>>s;
        t = max(t, q);
        v[q]++, v[t]--;
        t += s;
    }
    for (int i=1; i<t; i++) {
        v[i] += v[i-1];
        ans=max(ans, v[i]);
    }
    cout<<ans<<"\n";
}
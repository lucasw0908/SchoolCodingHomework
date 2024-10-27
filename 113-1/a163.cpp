#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    bool end;
    int t, n, m, ans, cur, pos;
    cin>>t;
    while (t--) {
        ans=cur=pos=end=0;
        cin>>n>>m;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        for (int i=9; i>=v[m]; i--) {
            for (int j=0; j<n; j++) {
                int c = (pos+j)%n;
                if (!v[c]) continue;
                if (v[c] == i) ans++, v[c]=0, cur=c;
                if (!v[m]) {end=1; break;}
            }
            pos = cur;
            if (end) break;
        }
        cout<<ans<<"\n";
    }
}
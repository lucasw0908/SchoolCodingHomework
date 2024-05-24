#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, t, ans;
    while (cin>>n) {
        ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin>>t;
            ans = min(ans, t);
        }
        cout<<ans<<"\n";
    }
}
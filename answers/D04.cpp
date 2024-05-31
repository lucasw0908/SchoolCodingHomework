#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double t, ans=0, a[10];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cin>>t;
            a[j] += t;
        }
    }
    for (double i: a) ans = max(ans, i);
    cout<<ans/5;
}
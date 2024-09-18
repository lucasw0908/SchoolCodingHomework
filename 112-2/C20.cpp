#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, t, ans=0;
    cin>>a>>b;
    for (int i = a; i <= b; i++) {
        t = 1;
        for (int j = 2; j <= i; j++) {
            t *= j;
        }
        ans += t;
    }
    cout<<ans;
}
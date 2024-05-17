#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, ans;
    cin>>a>>b;
    for (int i = min(a, b); i <= a*b; i++) {
        if (!(i%a || i%b)) {
            ans = i;
            break;
        }
    }
    cout<<ans;
}
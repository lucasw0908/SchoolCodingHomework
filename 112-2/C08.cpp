#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, ans;
    cin>>n;
    ans = n;
    while (n) {
        if (n < 4) break;
        n -= 3;
        ans++;
    }
    cout<<ans;
}
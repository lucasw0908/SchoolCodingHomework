#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double a, b, ans=0;
    cin>>a>>b;
    while (a < b) {
        a *= 1.1;
        ans++;
    }
    cout<<ans;
}
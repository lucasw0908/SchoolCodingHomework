#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, c, a2, b2, c2, ans;
    cin>>a>>b>>c;
    cin>>a2>>b2>>c2;
    ans = abs((a*3600+b*60+c) - (a2*3600+b2*60+c2));
    cout<<ans;
}
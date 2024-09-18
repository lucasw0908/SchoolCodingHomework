#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a1, b1, c1, a2, b2, c2, ans;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    ans = abs((a1*3600+b1*60+c1) - (a2*3600+b2*60+c2)); //計算時間差值後取絕對值
    cout<<ans;
}
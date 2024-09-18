#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, a, ans=0;
    cin>>n;
    for (int i = 0; i < n; i++) { //這種讀測資的形式很常用到
        cin>>a;
        ans += a;
    }
    cout<<ans;
}
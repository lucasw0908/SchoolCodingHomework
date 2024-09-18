#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

const int maxn = 1e2;

signed main() {
    int n, dp[maxn];
    dp[0] = dp[1] = 1;
    for (int i = 2; i < maxn; i++) dp[i] = dp[i-1] + dp[i-2];
    while (cin>>n) cout<<dp[n-1]<<"\n";
}
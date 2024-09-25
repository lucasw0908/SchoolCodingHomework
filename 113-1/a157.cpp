#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

const int MAXN = 1e2;

signed main() {
    fastio
    int n;
    vector<int> dp(MAXN, 1);
    dp[0] = 0;
    for (int i=2; i<MAXN; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    while (cin>>n) {
        cout<<dp[n]<<"\n";
    }
}
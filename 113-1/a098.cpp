#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define int long long

signed main() {
    fastio
    int n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for (const int &i: {1, 5, 10, 25, 50}) for (int j=i; j<=n; j++) dp[j] += dp[j-i];
    while (cin>>n) {
        if (dp[n] == 1) cout<<"There is only 1 way to produce "<<n<<" cents change. \n";
        else cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change. \n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define int long long

const vector<int> v = {
    1, 5, 10, 25, 50
};

signed main() {
    fastio
    int n;
    while (cin>>n) {
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        for (const int &i: v) for (int j=i; j<=n; j++) dp[j] += dp[j-i];
        if (dp[n] == 1) cout<<"There is only 1 way to produce "<<n<<" cents change. \n";
        else cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change. \n";
    }
}
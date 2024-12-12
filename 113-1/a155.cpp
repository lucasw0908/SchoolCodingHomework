#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define int long long

signed main() {
    fastio
    int n, m, t=1;
    while (cin>>n>>m) {
        if (!n && !m) break;
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        vector<int> a(n), b(m);
        for (int &i: a) cin>>i;
        for (int &i: b) cin>>i;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i] == b[j]) dp[i+1][j+1] = dp[i][j]+1;
                else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
        cout<<"Twin Towers #"<<t<<"\n";
        cout<<"Number of Tiles : "<<dp[n][m]<<"\n\n";
        t++;
    }
}
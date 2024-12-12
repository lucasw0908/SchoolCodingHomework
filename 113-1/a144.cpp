#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define int long long

signed main() {
    fastio
    int n, sum=0, ans=0;
    cin>>n;
    vector<int> v(n*n+1, 0);
    for (int i=1; i<=n*n; i++) {
        cin>>v[i];
        if (((i+n-1)%n)) v[i] += v[i-1];
    }
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            sum = 0;
            for (int k=0; k<n; k++) sum+=v[k*n+j]-((i==1)?0:v[k*n+i-1]), ans=max(ans, sum), sum=max(sum, 0LL);
        }
    }
    cout<<ans<<"\n";
}
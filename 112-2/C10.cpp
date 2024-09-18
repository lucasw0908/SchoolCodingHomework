#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, ma=0, mi=INT_MAX;
    while (cin>>n) {
        ma = max(ma, n);
        mi = min(mi, n);
    }
    cout<<ma<<" "<<mi;
}
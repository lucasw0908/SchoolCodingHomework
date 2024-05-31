#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, t;
    vector<int> v(105, 0);
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>t;
        v[t]++;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] > 0) cout<<"NO."<<i<<" : "<<v[i]<<"\n";
    }
}
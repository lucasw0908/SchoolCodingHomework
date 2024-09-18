#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, t;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>t;
        v.push_back(t);
    }
    reverse(v.begin(), v.end());
    for (int i: v) cout<<i<<" ";
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define all(x) x.begin(), x.end()

signed main() {
    fastio
    int n, a=-1, b=-1;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    for (auto &i: v) {cout<<i<<" ";} cout<<"\n";
    for (int i=0; i<n; i++) {
        if (v[i] >= 60) {
            a = v[i];
            if (i) b = v[i-1];
            break;
        } else b = v[i];
    }
    if (!(b+1)) cout<<"best case"<<"\n";
    else cout<<b<<"\n";
    if (!(a+1)) cout<<"worst case"<<"\n";
    else cout<<a<<"\n";
}
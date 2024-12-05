#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define int long long

signed main() {
    fastio
    int n, i, t, mt=0;
    vector<int> nodes(1e5, 0);
    while (cin>>n) {
        t = 1;
        while (nodes[t]) {
            if (nodes[t] > n) t = t << 1;
            else t = t << 1 | 1;
        }
        nodes[t] = n, mt = max(mt, t);
    }
    for (i=0; i<31; i++) if (mt < pow(2, i)) break;
    cout<<i<<"\n";
}
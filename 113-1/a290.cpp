#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
#define all(x) x.begin(), x.end()

const int maxn = 1e4+5;

signed main() {
    fastio
    int n, p, x;
    while (cin>>n) {
        vector<int> v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        sort(all(v));
        cin>>p;
        for (int i=0; i<n; i++) {
            if (v[i] > p/2) break;
            if (binary_search(v.begin()+i+1, v.begin()+n, p-v[i])) x = v[i];
        }
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<p-x<<".\n\n";
    }
}
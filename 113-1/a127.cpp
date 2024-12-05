#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define all(x) x.begin(), x.end()

signed main() {
    fastio
    int n;
    while (cin>>n) {
        bool b = 1;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin>>v[i];
        sort(all(v));
        for (int i=1; i<n; i++) {
            if (v[i]-1 != v[i-1]) {b=0; break;}
        }
        cout<<v[0]<<" "<<v[n-1];
        if (b) cout<<" yes\n";
        else cout<<" no\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

const int maxn = 5e4+5;

vector<int> v(maxn);
set<int> s;

void f(int p) {
    if (s.find(p) != s.end()) return;
    s.insert(p);
    f(v[p]);
}

signed main() {
    fastio
    int n, ans=0;
    cin>>n;
    for (int i=0; i<n; i++) cin>>v[i];
    for (int i=0; i<n; i++) {
        if (s.find(i) == s.end()) f(i), ans++;
    }
    cout<<ans<<"\n";
}
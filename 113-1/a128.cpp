#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define all(x) x.begin(), x.end()
#define F first
#define S second

const int maxn = 1e4+5;

bool cmp(const pair<int, vector<int>> v1, const pair<int, vector<int>> v2) {
    return v1.S.size() > v2.S.size(); 
}

signed main() {
    fastio
    int n, m, a, b;
    vector<pair<int, vector<int>>> v(maxn);
    cin>>n>>m;
    for (int i=1; i<=n; i++) v[i].F = i;
    while (m--) {
        cin>>a>>b;
        if (v[a].S.size() < v[b].S.size()) swap(a, b);
        v[a].S.push_back(b);
        for (int &i: v[b].S) v[a].S.push_back(i);
    }
    sort(all(v), cmp);
    v[0].S.push_back(v[0].F);
    sort(all(v[0].S));
    cout<<v[0].F<<"\n";
    for (int &i: v[0].S) cout<<i<<" ";
}
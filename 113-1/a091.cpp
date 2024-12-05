#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int get() {
    int x = pq.top();
    pq.pop();
    return x;
}

signed main() {
    fastio
    while (cin>>n) {
        int t, tt, ans=0;
        if (!n) break;
        while (!pq.empty()) pq.pop();
        while (n--) cin>>t, pq.push(t);
        while (pq.size() != 1) {
            tt = get() + get();
            ans += tt;
            pq.push(tt);
        }
        cout<<ans<<"\n";
    }
}
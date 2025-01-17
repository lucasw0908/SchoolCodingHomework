#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

signed main() {
    fastio
    int n, m, t;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin>>n>>m;
    while (n--) {
        cin>>t;
        if ((int)pq.size() == m) {
            int a = pq.top();
            pq.pop(); pq.push(a+t);
        } 
        else pq.push(t);
    }
    while (!pq.empty()) {
        if (pq.size() == 1) cout<<pq.top()<<"\n";
        pq.pop();
    }
}
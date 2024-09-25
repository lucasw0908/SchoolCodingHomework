#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

const int MAXN = 1e5+5;

vector<pii> v(MAXN);

int find(int p, int s) {
    int path = 1;
    for (int i=p; i<s; i++) {
        if (!v[i].F) continue;
        path *= (find(i+1, v[i].F) + find(v[i].F+1, v[i].S)); // 分兩段IF-ELSE、ELSE-END_IF，分別去抓裡面是否還有更多延伸路徑之後加總
        i = v[i].S;
    }
    return path;
}

signed main() {
    fastio
    string s;
    stack<int> sif;
    int n; cin>>n;
    for (int i=0; i<n; i++) {
        v.clear();
        int cur = 0;
        while (cin>>s) {
            cur++;
            if (s=="ENDPROGRAM") break;
            else if (s=="IF") sif.push(cur);
            else if (s=="ELSE") v[sif.top()].F=cur;
            else if (s=="END_IF") v[sif.top()].S=cur, sif.pop(); // 抓最近一個還沒被配對完的IF，依序填上ELSE、END_IF並刪除
            else cur--;
        }
        cout<<find(1, cur)<<"\n";
    }
}
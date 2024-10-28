#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second

bool e = 0;

void solve() {
    int cnt = 0;
    char o, a, b;
    stringstream ss;
    vector<stack<pair<char, char>>> v(52);
    cin>>o;
    if (o == '#') {
        e = 1;
        return;
    }
    cin>>b;
    v[0].push({o, b});
    for (int i=1; i<52; i++) {
        cin>>a>>b;
        v[i].push({a, b});
    }
    for (int i=1; i<(int)v.size(); i++) {
        for (int j: {3, 1}) {
            if (i-j>=0 && (v[i].top().F == v[i-j].top().F || v[i].top().S == v[i-j].top().S)) {
                v[i-j].push(v[i].top());
                v[i].pop();
                if (v[i].empty())v.erase(v.begin()+i);
                i-=(j+1);
                break;
            }
        }
        if (v.size() == 1) break;
    }
    for (auto i: v) {
        if (!i.empty()) {
            ss<<i.size()<<" ";
            cnt++;
        }
    }
    cout<<cnt<<" pile"<<(cnt>1?"s":"")<<" remaining: "<<ss.str()<<"\n";
}

signed main() {
    while (!e) solve();
}
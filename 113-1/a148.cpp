#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define F first
#define S second

bool cmp(const pii &m1, const pii &m2) {
    return (m1.S == m2.S)?(m1.F > m2.F):(m1.S < m2.S);
}

signed main() {
    vector<pii> vm;
    map<int, int> m;
    char c;
    while ((c=getchar())) {
        if ((c == '\n' || c == EOF) && !m.empty()) {
            for (auto &i: m) vm.push_back(i);
            sort(all(vm), cmp);
            for (auto [k, v]: vm) cout<<k<<" "<<v<<"\n";
            cout<<"\n";
            m.clear(); vm.clear();
        }
        else if (m.find(c) == m.end()) m[c] = 1;
        else m[c]++;
        if (c == EOF) break;
    }
}
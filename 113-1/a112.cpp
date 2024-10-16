// 由於中文編碼問題，這份扣是爛的，先用 python 的版本吧

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second

struct Place {
    string name;
    map<string, int> an;
};

signed main() {
    fastio
    int n, c;
    string a, p;
    map<string, Place> m;
    vector<string> v;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a>>c>>p;
        if (m.find(p) == m.end()) m[p] = {p, {}};
        if (m[p].an.find(a) == m[p].an.end()) m[p].an[a] = 0;
        m[p].an[a] += c;
    }
    for (const map<string, Place>::value_type &pl: m) {
        cout<<pl.S.name<<":";
        for (const map<string, int>::value_type &i: pl.S.an) {
            v.push_back(i.F+" "+to_string(i.S));
        }
        for (int i=0; i<(int)v.size(); i++) {
            cout<<v[i];
            if (i != (int)v.size()-1) cout<<",";
        }
        cout<<"\n";
    }
}
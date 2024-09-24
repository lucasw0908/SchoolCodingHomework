// AC 95%

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

const int INF = INT_MAX;

vector<set<pii>> vp(12);
vector<vector<int>> v(5, vector<int>(5));
vector<vector<bool>> vb(5, vector<bool>(5));
set<int> s;

void build() {
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            vp[i].insert({i, j});
            vp[5+j].insert({i, j});
            vp[10].insert({i, i});
            vp[11].insert({i, 4-i});
        }
    }
} // 預先建好所有連線方式

int check(int i, int j) {
    int out=0;
    if (vb[i][j]) return 0;
    vb[i][j] = 1;
    for (int k=0; k<12; k++) {
        int c=0;
        for (pii ss:vp[k]) {
            if (vb[ss.F][ss.S]) c++;
        }
        if (c==5) out++;
    }
    vb[i][j] = 0;
    return out;
} // 檢查放這一顆的連線有幾條

signed main() {
    fastio
    int t, ans=INF, maxc=0;
    build();
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) cin>>v[i][j];
    }
    while (cin>>t) {
        if (t==-1) break;
        else s.insert(t);
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            vb[i][j] = (s.find(v[i][j]) != s.end());
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            int c = check(i, j);
            if (c > maxc || ((c == maxc) && (v[i][j] < ans))) {
                ans = v[i][j];
                maxc = c;
            }
        }
    }
    cout<<ans<<"\n";
}
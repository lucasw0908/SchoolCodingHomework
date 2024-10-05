#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>

const int MAXN = 25;
const int c_size = 4;

vector<set<pii>> c(c_size*2+2);
vector<vector<vector<int>>> v(MAXN, vector<vector<int>>(c_size, vector<int>(c_size, 0)));
vector<vector<vector<bool>>> vb(MAXN, vector<vector<bool>>(c_size, vector<bool>(c_size, 0)));
vector<int> p(MAXN, 0);

void build() {
    for (int i=0; i<c_size; i++) {
        for (int j=0; j<c_size; j++) {
            c[i].insert({i, j});
            c[c_size+j].insert({i, j});
            c[c_size*2].insert({i, i});
            c[c_size*2+1].insert({i, c_size-i-1});
        }
    }
} // 似曾相識的預先建好所有連線方式

bool check(int p) {
    for (int i=0; i<c_size*2+2; i++) {
        bool b=true;
        for (pii cc: c[i]) {
            if (!vb[p][cc.F][cc.S]) { b=false; break; }
        }
        if (b) return true;
    }
    return false;
} // 檢查是否能連線成功

signed main() {
    fastio
    char o, name[MAXN];
    bool end=false;
    int n, p;
    build();
    cin>>o>>n;
    for (int t=0; t<n; t++) {
        cin>>name[t];
        for (int i=0; i<c_size; i++) {
            for (int j=0; j<c_size; j++) cin>>v[t][i][j];
        }
    }
    cin>>o;
    for (int i=0; i<c_size*c_size; i++) {
        cin>>p;
        cout<<p<<" ";
        for (int j=0; j<n; j++) {
            for (int a=0; a<c_size; a++) {
                for (int b=0; b<c_size; b++) {
                    if (v[j][a][b]==p) vb[j][a][b]=1;
                }
            }
            if (check(j)) {
                cout<<name[j]<<" ";
                end=true;
            }
        }
        if (end) break;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define F first
#define S second
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

struct Team {
    int id, bp=0;
    vector<vector<int>> v;
};

signed main() {
    fastio
    int k, n;
    vector<Team> teams;
    cin>>k>>n;
    for (int i=0; i<n; i++) {
        int id, tt = 3, bp = 0;
        vector<int> vt(2*k+1);
        Team t;
        cin>>id;
        t.id = id;
        while (tt--) {
            for (int j=0; j<2*k+1; j++) {
                cin>>vt[j];
                bp += vt[j];
            }
            t.v.push_back(vt);
        }
        teams.push_back(t);
    }
    sort(all(teams), [&](Team a, Team b) {
        return a.bp > b.bp;
    });
    // sort(all(teams), [&](Team a, Team b) {
    //     int p = 0;
    //     for (int i=0; i<2*k+1; i++) {
    //        p += (a.v[0][i] == b.v[0][i])?(a.bp > b.bp):(a.v[0][i] > b.v[0][i]);
    //     }
    //     return p > k;
    // });
    for (int i=0; i<n; i++) {
        cout<<teams[i].id<<" ";
    }
}
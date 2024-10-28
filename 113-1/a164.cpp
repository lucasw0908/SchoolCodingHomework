#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

const int MAXN = 1e3+5;

signed main() {
    fastio
    bool f;
    int n, m, t, c=0;
    string s;
    vector<queue<int>> q;
    map<int, int> dict;
    while (cin>>t) {
        q.clear(); dict.clear();
        if (t == 0) break;
        cout<<"Scenario #"<<++c<<"\n";
        for (int i=0; i<t; i++) {
            cin>>n;
            for (int j=0; j<n; j++) cin>>m, dict[m] = i;
        }
        while (cin>>s) {
            if (s == "STOP") break;
            else if (s == "ENQUEUE") {
                cin>>n; f = 0;
                for (int i=0; i<(int)q.size(); i++) {
                    if (!q[i].empty() && dict[q[i].front()] == dict[n]) {
                        q[i].push(n);
                        f = 1; break;
                    }
                }
                if (!f) q.push_back(queue<int>()), q.back().push(n);
            }
            else if (s == "DEQUEUE") {
                cout<<q.front().front()<<"\n";
                q.front().pop();
                if (q.front().empty()) q.erase(q.begin());
            }
        }
        cout<<"\n";
    }
}
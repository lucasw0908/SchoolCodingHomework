#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    int pl=0, p=0, t=1;
    string s;
    vector<queue<string>> v(4);
    vector<string> name(4);
    for (int i=0; i<4; i++) {
        cin>>name[i];
        for (int j=0; j<13; j++) cin>>s, v[i].push(s);
    }
    while (true) {
        s = v[pl].front(); v[pl].pop();
        if (s=="A") p = 0;
        else if (s=="K") p = 99;
        else if (s=="10") p += (p>89)?-10:10;
        else if (s=="Q") p += (p>79)?-20:20;
        else if (s=="4") t = -t;
        else if (s!="5" && s!="J") p += stoi(s);
        if (p>99) {
            cout<<name[pl]<<"\n"<<v[pl].size()<<"\n";
            break;
        }
        if (v[pl].empty()) {
            cout<<name[pl]<<"\n"<<p<<"\n";
            break;
        }
        pl = (pl+t+4)%4;
    }
}
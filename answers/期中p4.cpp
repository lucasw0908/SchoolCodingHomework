#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main() {
    fastio
    int d, n, t=0, w=1;
    int dis[2], nt[12] = {0, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1};
    cin>>d>>n;
    d /= 30;
    if (nt[d] == n) {
        cout<<"no thank u";
        return 0;
    }
    for (int i = 0; i < 2; i++) {
        t = d;
        if (i) w = -1;
        for (int j = 0; j < 12; j++) {
            if (t > 12) t -= 12;
            if (t < 0) t += 12;
            if (nt[t] == n) dis[i] = j;
            t += w;
        }
    }
    if (dis[0] > dis[1]) cout<<"clockwise";
    else if (dis[0] < dis[1]) cout<<"counterclockwise";
    else cout<<"both okay";
}
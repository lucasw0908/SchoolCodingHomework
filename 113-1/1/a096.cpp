#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    stringstream ans[3];
    char o;
    int a[3], t[3];
    for (int i=0; i<2; i++) {
        cin>>a[0]>>o>>a[1]>>o>>a[2];
        t[i] = a[0]*3600 + a[1]*60 + a[2];
    }
    t[2] = t[1] - t[0];
    memset(a, 0, sizeof(a));
    if (t[2] < 0) t[2] = 24*3600 + t[2];
    for (int i=2; i>=0; i--) {
        while (t[2] >= pow(60, i)) t[2]-=pow(60, i), a[2-i]++;
        ans[2-i]<<setw(2)<<setfill('0')<<a[2-i];
    }
    cout<<ans[0].str()<<":"<<ans[1].str()<<":"<<ans[2].str()<<"\n";
}
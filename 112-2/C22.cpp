#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, w, cw, lw, i=1, b=1;
    cin>>n;
    w = 1 + (n-1)*2; //一排有幾個
    cw = w;
    while (cw--) {
        lw = 1 + (i-1)*2; //這排的星星有幾個
        for (int j = 0; j < (w - lw)/2; j++) cout<<" ";
        for (int j = 0; j < lw; j++) cout<<"*";
        cout<<"\n";
        if (w == lw) b = -1;
        i += b;
    }
}
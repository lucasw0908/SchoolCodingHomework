#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    vector<vector<string>> v(9, vector<string>(9));
    int a, b, s=0, t=0, ans=0;
    for (int i=0; i<9; i++) {
        cin>>a;
        for (int j=0; j<a; j++) cin>>v[j][i];
    }
    cin>>b;
    for (int i=0; i<5; i++) {
        for (int j=0; j<9; j++) {
            if (!b) { cout<<ans<<"\n"; return 0; }
            else if (v[i][j]=="FO" || v[i][j]=="GO" || v[i][j]=="SO") t++, b--;
            else if (v[i][j]=="1B") s = (s<<1)|(1<<0); // 使用位元運算處理壘包狀態
            else if (v[i][j]=="2B") s = (s<<2)|(1<<1);
            else if (v[i][j]=="3B") s = (s<<3)|(1<<2);
            else if (v[i][j]=="HR") s = (s<<4)|(1<<3);
            for (int k=64; k>7; k>>=1) if (s>=k) s-=k, ans++;
            if (t==3) s=0, t=0;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

const int MAXN = 1e2+5;

signed main() {
    fastio
    vector<vector<bool>> vvb(MAXN, vector<bool>(MAXN, 0));
    int n, t;
    while (cin>>n) {
        if (!n) return 0;
        vector<bool> vb(n*2, 0);
        bool co=0, pb[2]={0, 0};
        int pi[2]={0, 0};
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) cin>>t, vvb[i][j] = t;
        } // 輸入
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                vb[i] = vb[i] ^ vvb[i][j];
                vb[n+j] = vb[n+j] ^ vvb[i][j];
            }
        } // 每一行/列做xor找錯誤行/列
        for (int t=0; t<2; t++) {
            for (int i=0; i<n; i++) {
                if (pb[t] && vb[i+t*n]) co=1;
                if (vb[i+t*n]) pb[t]=1, pi[t]=i;
            }
        } // 抓1錯誤行+1錯誤列 = Change bit, 沒錯誤行/列 = OK, 其他狀況 = Corrupt
        if (co) cout<<"Corrupt\n"<<"\n";
        else if (!pb[0] && !pb[1]) cout<<"OK"<<"\n";
        else cout<<"Change bit ("<<pi[0]+1<<","<<pi[1]+1<<")"<<"\n";
    }
}
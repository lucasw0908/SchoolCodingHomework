#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

int fastpow(int n, int k) {
    if (!k) return 1;
    if (k%2) return fastpow(n, k/2) * fastpow(n, k/2) * n;
    return fastpow(n, k/2) * fastpow(n, k/2);
} // 用內建 pow() 函數也可，速度問題而已

signed main() {
    fastio
    int n, k, ans;
    cin>>n;
    while (n--) {
        cin>>k;
        for (int i=(int)sqrt(fastpow(10, k-1)); i<(int)sqrt(fastpow(10, k)); i++) {
            bool out=false;
            for (char j: to_string(fastpow(i, 2))) if ((int)j%2) out=true;
            if (!out) {ans=fastpow(i, 2); break;}
        }
        cout<<ans<<"\n";
    }
}
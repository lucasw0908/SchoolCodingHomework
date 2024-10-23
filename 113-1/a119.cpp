#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    char c;
    int t=0, ans=0;
    while ((c=getchar())!=EOF) { // 水題 注意不要再未出現左括號就先出現比較多的右括號+最後括號要抵銷就好了
        if (c == '(' ) t++;
        else if (c == ')') t--, ans++;
        if (t < 0) {
            cout<<0<<"\n";
            return 0;
        }
    }
    if (!t) cout<<ans<<"\n";
    else cout<<0<<"\n";
}
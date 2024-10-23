#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    stack<int> s, a;
    bool in=0;
    int n, t, win=0;
    while (true) {
        if (!in) {
            cin>>n; in=1;
            if (!n) break;
        }
        // 初始化
        while (!s.empty()) s.pop();
        while (!a.empty()) a.pop();
        for (int i=0; i<n; i++) a.push(n-i);

        for (int i=0; i<n; i++) {
            cin>>t;
            if (t == 0) {in=0; break;}
            while (true) {
                if (!a.empty() && a.top() == t) {a.pop(); break;} // 從a抓抓看
                else if (!s.empty() && s.top() == t) {s.pop(); break;} // 從s抓抓看
                else if (!a.empty()) s.push(a.top()), a.pop(); // 都抓不到那就拿一個a丟進s 然後下一次循環再看a有沒有能放的
                else if (a.empty()) {win=-1; break;} // a空了還抓不到就代表沒機會了 用不對的順序卡在s了 標記-1表示不可能過了
            }
            if (win!=-1 && a.empty() && s.empty()) win=1; // 沒被標記-1 且a、s都空了 代表順利成功
        }
        if (win == -1) win=0; // 標記-1代表不可能
        if (t != 0) cout<<(win?"Yes":"No")<<"\n";
        else cout<<"\n";
    }
}
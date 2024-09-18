#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

const int MAXN = 72;

struct BigNumber {
    vector<int> n;

    BigNumber(int p=1) {
        n.resize(MAXN, 0);
        n[0] = p;
    }

    BigNumber(vector<int> s) { n = s; }

    BigNumber operator+(BigNumber x) {
        vector<int> s(MAXN, 0);
        int t = 0;
        vector<int> x_vec = x.get();
        for (int i=0; i<MAXN; i++) {
            s[i] = n[i] + x_vec[i] + t;
            if (s[i] > 9) s[i] -= 10, t = 1;
            else t = 0;
        };
        BigNumber o(s);
        return o;
    }

    BigNumber operator*(int x) {
        vector<int> s(MAXN, 0);
        BigNumber a(s);
        BigNumber b(n);
        for (int i=0; i<x; i++) a = a + b;
        return a;
    }

    vector<int> get() { return n; }

    void out() {
        bool s=false;
        for (int i=MAXN-1; i>=0; i--) {
            if (n[i]) s = true;
            if (s) cout<<n[i];
        }
        cout<<"\n";
    }
};

signed main() {
    fastio
    BigNumber a(1), b(3), ans(1); // 手刻大數運算 如果不想刻可以用Python快速完成
    int n;
    cin>>n;
    for (int i=1; i<n; i++) {
        a = a + b;
        b = b * 4;
        ans = ans + a;
    }
    ans.out();
}
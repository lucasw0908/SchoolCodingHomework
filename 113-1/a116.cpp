#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

vector<int> m = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void is_special(int y) {
    if (y%4) m[2]=28;
    else if (y%100) m[2]=29;
    else if (y%400) m[2]=28;
    else m[2]=29;
} // 閏年處理

string add_zero(int x, int c=2) {
    stringstream x_ss;
    x_ss << setw(c) << setfill('0') << x;
    return x_ss.str();
} // 補上日期格式(YYYY/MM/DD)

signed main() {
    fastio
    char o;
    int n, a, b, c, t, d=1;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>t;
        d = (d * t) / __gcd(d, t); // 最小公倍數
    }
    cin>>a>>o>>b>>o>>c;
    while (d) {
        c++;
        if (b==2) is_special(a);
        if (c > m[b]) c=1, b++;
        if (b > 12) b=1, a++;
        d--;
    }
    cout<<add_zero(a, 4)<<"/"<<add_zero(b)<<"/"<<add_zero(c)<<"\n";
}
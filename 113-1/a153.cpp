#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

double f(double x) {
    return 2 - exp(x);
}

signed main() {
    fastio
    int n = 100;
    double m, a = 0, b = 1;
    while (n--) {
        m = (a + b) / 2;
        if (f(m)*f(a) > 0) a = m;
        else b = m;
    }
    cout<<setprecision(6)<<fixed<<m<<"\n";
}
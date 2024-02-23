#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double a, b, ans;
    cin>>a;
    cin>>b;
    b /= 100;
    ans = a/(b*b);
    printf("%.3f", ans);
}
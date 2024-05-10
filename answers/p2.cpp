#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main() {
    fastio
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    printf("%.1f", (a+b+c+d)/4); //求算術平均數後四捨五入到第一位
}
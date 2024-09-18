#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double a, b, c, d, sum;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    sum = (int)a + (int)b + ceil(c) + ceil(d); //轉成int就會無條件捨去，ceil()用來無條件進位(無條件捨去也可以用floor())
    printf("%.0f", sum/4);
}
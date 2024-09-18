#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, ans;
    cin>>a>>b;
    ans = abs(a-b)/2 + 1;
    if (a%2&&b%2) ans--; //0相當於false 0以外相當於true &&代表and
    cout<<ans;
}
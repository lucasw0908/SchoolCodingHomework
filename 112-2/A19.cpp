#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, c;
    cin>>a>>b>>c;
    cout<<((a+b>c&&a+c>b&&b+c>a)?1:0);
}
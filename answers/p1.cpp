#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main() {
    fastio
    int a, b, n;
    cin>>a>>b>>n;
    if (a%n == b%n) cout<<"1"; //如果同餘輸出1，反之輸出0
    else cout<<"0";
}
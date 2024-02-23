#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, n, m;
    cin>>a>>b>>n>>m;
    if (a>b) swap(a, b); //如果a比b大 交換a、b用swap(a, b)
    if (a<n&&b>n) cout<<m*2; // &&代表and
    else if (a>n||b<n) cout<<-m; // ||代表or
    else if (a==n||b==n) cout<<-m*2;
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a1, b1, a2, b2;
    cin>>a1>>b1;
    cin>>a2>>b2;
    if (a1+b1==a2+b2) cout<<"Again";
    else cout<<(a1+b1>a2+b2?"Min":"Shin");
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a;cin>>a;
    if (a>=90&&a<=100) cout<<"A";
    else if (a>=80&&a<=89) cout<<"B";
    else if (a>=70&&a<=79) cout<<"C";
    else if (a>=60&&a<=69) cout<<"D";
    else cout<<"F";
}
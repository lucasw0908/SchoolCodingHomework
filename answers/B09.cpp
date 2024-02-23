#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a;cin>>a;
    if (!(a%400)) cout<<"Yes";
    else if (!(a%100)) cout<<"No";
    else if (!(a%4)) cout<<"Yes";
    else cout<<"No";
}
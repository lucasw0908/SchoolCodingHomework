#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, t, a=0, b=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>t;
        if (t%2) a++;
        if (!(t%2)) b++;
    }
    cout<<a<<" "<<b;
}
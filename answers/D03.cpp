#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, m, t=1, a[1005];
    cin>>n;
    for (int i = 0; i < n; i++) cin>>a[i];
    cin>>m;
    for (int i: a) {
        if (i == m) {
            cout<<t;
            break;
        }
        else t++;
    } 
}
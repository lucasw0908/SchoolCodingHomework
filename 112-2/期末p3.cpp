#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int m, p, n=0;
    cin>>m;
    while (cin>>p) {
        m -= p;
        n++;
        if (m <= 0) {
            cout<<n;
            return 0;
        }
    }
    cout<<"Not yet";
}
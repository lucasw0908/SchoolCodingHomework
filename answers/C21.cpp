#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<i<<"X"<<j<<"="<<i*j<<" ";
        }
        cout<<"\n";
    }
}
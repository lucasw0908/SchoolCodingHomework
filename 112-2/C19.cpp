#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    while (cin>>n) {
        for (int i = 1; i <= n; i++) {
            if (!(n%i)) cout<<i<<" ";
        }
    }
    cout<<"\n";
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n, ans=0;
    cin>>n;
    while (n) {
        if (n%2) n--;
        else n /= 2;
        ans++;
    }
    cout<<ans;
}
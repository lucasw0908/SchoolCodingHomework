#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, ans=0;
    while (cin>>a>>b) {
        if (!(a%b)) ans++; 
    }
    cout<<ans;
}
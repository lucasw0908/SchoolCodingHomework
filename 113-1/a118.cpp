#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    int n, a; cin>>n;
    if (n%2) cout<<0<<"\n";
    else {
        a = sqrt(pow(2, n)/4);
        cout<<a<<" "<<a<<" "<<a<<" "<<a<<"\n"; // 透過觀察可以發現會存在解的情況為4^k
    }
}
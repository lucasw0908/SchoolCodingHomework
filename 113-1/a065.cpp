#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    int ans=0;
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++) ans+=(s[i]-'0')*((i%2)?1:-1);
    cout<<abs(ans)<<"\n";
}
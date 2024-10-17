#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

signed main() {
    fastio
    int p=-1;
    string s; char c;
    cin>>s>>c;
    for (int i=0; i<(int)s.size(); i++) {
        if (tolower(s[i])==tolower(c)) {
            if (!(p+1)) p = i;
            else cout<<i-p<<" ", p = i;
        }
    }
}
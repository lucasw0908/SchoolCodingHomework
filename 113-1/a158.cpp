#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

int f91(int n) {
    if (n <= 100) return f91(f91(n+11));
    return n-10;
}

signed main() {
    fastio
    int n;
    while (cin>>n) {
        if (!n) break;
        cout<<"f91("<<n<<") = "<<f91(n)<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    bool a, b;
    while(cin>>n) {
        b = 1;
        for (int i = 0; i < n; i++) {
            cin>>a;
            b ^= !a; //觀察後會發現可以用xor解，或者也可以算否定的次數去解
        }
        cout<<b<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

const int maxn = 1e7+5;

int n;

signed main() {
    cin>>n;
    for (int i = 2; i < n; i++) {
        if (!(n%i)) {
            cout<<i;
            return 0;
        }
    }
    cout<<"P";
}
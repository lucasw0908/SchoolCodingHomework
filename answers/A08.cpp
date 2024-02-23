#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    string a;
    cin>>a;
    for (int i = a.length(); i > 0; i--)
    {
        cout<<a[i-1]<<"\n";
    }
}
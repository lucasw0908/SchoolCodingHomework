#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    string n;
    cin>>n;
    reverse(n.begin(), n.end());
    cout<<stoi(n);
}
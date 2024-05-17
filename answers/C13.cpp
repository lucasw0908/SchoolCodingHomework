#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    cin>>n;
    cout<<"Do you agree to the contract?\n";
    while (!n) {
        cin>>n;
        cout<<"You must agree to the contract.\n";
    }
    cout<<"Account registration completed.\n";
}
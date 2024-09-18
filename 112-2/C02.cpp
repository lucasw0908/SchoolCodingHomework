#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    cin>>n;
    for (int i = 1; i < n; i += 2) { //從1開始小於n每次加2
        cout<<i<<"\n"; //洨知識 用\n比endl還要快
    }
}
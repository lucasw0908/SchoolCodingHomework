#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n[5], point=0, ans=0;
    map<int, int> m = {{11, 10}, {12, 10}, {13, 10}};
    for (int i = 0; i < 5; i++) cin>>n[i];
    for (int i:n) {
        if (m[i]) i = m[i];
        ans++;
        point += i;
        if (point > 21) {
            cout<<ans;
            return 0;
        } 
    }
    cout<<"Five Card Charlie";
}
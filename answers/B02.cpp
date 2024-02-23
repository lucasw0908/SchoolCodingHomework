#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b;
    cin>>a>>b;
    cout<<((a*60+b==420)?"perfect!":"imperfect");
}
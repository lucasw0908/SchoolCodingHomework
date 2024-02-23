#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int n;
    string ans="";
    cin>>n;
    ans += (n%3)?"":"3"; //如果除3餘0(被3整除) 往ans加上3 否則ans不變
    ans += (n%4)?"":"4"; //同上
    ans += (n%5)?"":"5"; //同上
    cout<<ans;
}
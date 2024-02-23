#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int h, a, b, ans=1; //從第一天開始算
    cin>>h;
    cin>>a;
    cin>>b;
    if (h==0) { //如果h=0那連一天都不用 (題目不會卡這個但以防萬一)
        cout<<0;
        return;
    }
    while (h>a) //當這個白天爬不完
    {
        h -= a-b; //剩餘高度減少白天減晚上的上升量
        ans++; //又過了一天
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, c;
    cin>>a>>b>>c;
    cout<<(a+b+c-min(a, min(b, c))-max(a, max(b, c))); //a、b、c總和扣除其中最大數跟最小數

    //總算是解完了，排除測資錯誤的部分其實解的蠻順的，然後順帶一提，這題是唯一一題會爆int的題目
}
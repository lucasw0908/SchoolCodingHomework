#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

signed main() {
    int a, b, ans; //ans等於票價
    cin>>a>>b;
    if (b>=65) ans = 500; //先算基礎票價
    else if (b<=12) ans = 600;
    else ans = 1200;
    if (a%2) ans *= 0.8; //再算優惠
    else ans = max(0, ans-200); //max(a, b)會輸出a、b較大者，這裡用來防止折價之後變成負的票價，不讓他小於0(當然你也可以學我耍毒用clamp()結果APCS模擬測驗水題爛掉因為那邊環境不到c++17)
    cout<<ans;

    //由於此題測資有誤，使用這段程式碼並不會通過!!!
}
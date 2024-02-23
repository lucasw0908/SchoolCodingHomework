#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b, chicken, rabbit;
    cin>>a>>b;
    rabbit = (b-a*2)/2; //先全部當雞(2隻腳)，如果有多的腳每多2隻=一隻兔子
    chicken = a - rabbit; //總數-兔子數=雞數
    cout<<chicken<<" "<<rabbit;

    //由於此題測資有誤，使用這段程式碼並不會通過!!!
}
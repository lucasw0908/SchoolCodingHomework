#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

signed main() {
    int a, b, t;
    cin>>a>>b;
    t = a * 100 + b; //先把兩個時間併在一起方便後面比較
    if (t<810||t>1600) cout<<"YES"; //根本不在上學時間
    else if (t>=1450&&t<1510) cout<<"YES"; //因為唯獨打掃時間比較特別因此特別拉出來判斷
    else if (t>1200) cout<<((b<50)?"NO":"YES"); //在下午 如果分小於50還在上課
    else cout<<((b>10)?"NO":"YES"); //在上午 如果分大於10還在上課
}
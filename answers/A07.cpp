#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    string a;
    cin>>a;
    if (a.length()==1) cout<<0; //如果沒給十位數數字就當作0
    else cout<<a[a.length()-2]; //輸出倒數第二個字元就是十位數
}
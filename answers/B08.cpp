#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    string ans="";
    int a[7], b[7]; //建立兩個大小為7的array
    for (int i = 0; i < 7; i++) cin>>a[i]; //依序往array裡面輸入平仄代表數字(0、1)
    for (int i = 0; i < 7; i++) cin>>b[i]; 
    ans += (a[1]!=a[3]&&a[1]==a[5]&&b[1]!=b[3]&&b[1]==b[5])?"":"A"; //程式的世界中要由0開始算 所以a[1]其實是a聯的第二個字喔
    ans += (a[6]==1&&b[6]==0)?"":"B"; 
    ans += (a[1]!=b[1]&&a[3]!=b[3]&&a[5]!=b[5])?"":"C"; 
    cout<<((ans.length())?ans:"None"); //如果ans字串長度不為0 輸入ans 否則輸出None
}
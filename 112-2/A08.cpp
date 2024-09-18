#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    string a;
    cin>>a;
    for (int i = a.length(); i > 0; i--) //迴圈讓i從a的長度到0各跑一遍
    {
        cout<<a[i-1]<<"\n"; //輸出那一個位置的值(因為程式從0開始數，所以i要減1)
    }
}
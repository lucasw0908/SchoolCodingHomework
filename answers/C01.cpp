#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    int a, b;
    cin>>a>>b;
    for (int i = a; i < b; i++) { //從a開始到b(左閉右開)輸出數字
        cout<<i<<" ";
    }
    cout<<b; //輸出一個不用加空格的b
}
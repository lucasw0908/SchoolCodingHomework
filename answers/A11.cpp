#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double a, b, ans; //小數點用float或是double，int或是long long只能用整數
    cin>>a;
    cin>>b;
    b /= 100; //身高換成公尺
    ans = a/(b*b);
    printf("%.3f", ans); //使用printf指定到小數後第3位
}
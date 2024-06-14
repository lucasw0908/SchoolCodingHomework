#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main() {
    fastio
    int x1, x2, y1, y2, n;
    cin>>x1>>y1>>x2>>y2>>n;
    map<int, int> m = { //建立手榴彈型號與範圍的字典
        {1, 1},
        {2, 3},
        {3, 5},
        {4, 10}
    };
    if (pow(x1-x2, 2) + pow(y1-y2, 2) <= pow(m[n], 2)) cout<<"dead";
    else cout<<"alive";
}
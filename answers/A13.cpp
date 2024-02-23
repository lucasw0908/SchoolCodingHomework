#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define int long long

signed main() {
    double PV, Rn; 
    int m, t;
    cin>>PV;
    cin>>Rn;
    cin>>m;
    cin>>t;
    cout<<PV*pow(1+Rn/m, m*t); //pow(x, n) 輸出x的n次方(c++ std的pow是笨，他不會快速冪 ※在本題中不影響)
}
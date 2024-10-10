#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

const int MAXN = 1e2+5;

struct pt {
    double x, y;
    double len() { return sqrt(x*x+y*y); }
};

signed main() {
    fastio
    int n;
    double a, b, ans=0;
    vector<pt> v;
    cin>>n;
    for (int i=0; i<n; i++) cin>>a>>b, v.push_back({a, b});
    v.push_back(v[0]);
    for (int i=0; i<n; i++) ans+=v[i].x*v[i+1].y-v[i].y*v[i+1].x;
    cout<<setprecision(2)<<fixed<<abs(ans)/2<<"\n";
}
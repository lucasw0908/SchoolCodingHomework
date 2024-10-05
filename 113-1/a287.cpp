// ACC 50% 測資目前看起來有點問題 先跳過

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long
#define all(x) x.begin(), x.end() 

signed main() {
    fastio
    vector<string> vs;
    string str="", ans="", itmp="";
    char c;
    while ((c=getchar()) != EOF) {
        if (c>='0' && c<='9') itmp+=c;
        else {
            if (!itmp.empty()) {
                if (itmp == "0") break;
                str=vs[vs.size()-stoi(itmp)];
                ans+=str; itmp="";
            }
            ans+=c;
        }
        if ((c>='A' && c<='Z') || (c>='a' && c<='z')) str+=c;
        else if (!str.empty()) {
            if (find(all(vs), str) != vs.end()) vs.erase(find(all(vs), str));
            vs.push_back(str);
            str = "";
        }
    }
    cout<<ans;
}
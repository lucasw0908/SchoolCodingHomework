#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

signed main() {
    fastio
    stack<int> s;
    int t1, t2;
    char c;
    while ((c=getchar())!=EOF) {
        if (c == '\n') {cout<<s.top()<<"\n"; s.pop();}
        else if (c >= '0' && c <= '9') s.push(c - '0');
        else {
            t2 = s.top(); s.pop();
            t1 = s.top(); s.pop();
            if (c == '+') s.push(t1+t2);
            else if (c == '-') s.push(t1-t2);
            else if (c == '*') s.push(t1*t2);
            else if (c == '/') s.push(t1/t2);
            else if (c == '%') s.push(t1%t2);
        }
    }
    if (!s.empty()) cout<<s.top()<<"\n";
}
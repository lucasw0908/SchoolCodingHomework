#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define out(x) {cout<<x.top(); x.pop();}

const map<char, int> p = {
    {'+', 1}, {'-', 1},
    {'*', 2}, {'/', 2},
    {'(', 0}, {')', 0}
};

signed main() {
    fastio
    char c;
    stack<char> s;
    while ((c=getchar())) {
        if (c == EOF || c == '\n') {
            while (!s.empty()) out(s);
            break;
        }
        else if (c == '(') s.push(c);
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') out(s);
            s.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!s.empty() && p.at(s.top()) >= p.at(c)) out(s);
            s.push(c);
        }
        else cout<<c;
    }
}
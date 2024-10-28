#include <bits/stdc++.h>
using namespace std;

int get(stack<int> &x) {int a=x.top(); x.pop(); return a;} // 事先定義好取出並移除stack頂端元素的東東

signed main() {
    bool e, p_int, h_int; // e: 錯誤, p_int: 上一個輸入的是不是int, h_int: 有沒有輸入過int
    char c;
    int n;
    stack<int> s;
    cin>>n; cin.ignore(); // ignore() 吃一顆n後面的換行
    while (n--) {
        e = p_int = h_int = 0;
        while (!s.empty()) s.pop(); // 初始化
        while ((c=getchar())) {
            if (c == EOF || c == '\n') break;
            else if (e) continue;
            else if (c == ',') p_int = 0;
            else if (c == ')') {
                if (s.size() < 4) {e = 1; continue;}
                int op=get(s), b=get(s), a=get(s), o=get(s); // 運算符、數字1、數字2、左括號
                if (o != '(') e = 1;
                else if (op == '+') s.push(a+b);
                else if (op == '-') s.push(a-b);
                else if (op == '*') s.push(a*b);
                else if (op == '/' && b != 0) s.push(a/b);
                else e = 1;
            }
            else if (p_int && isdigit(c)) {
                int a = get(s);
                s.push(a*10+c-'0'); // 處理多位數
            }
            else if (isdigit(c)) s.push(c-'0'), p_int = h_int = 1;
            else if (c == '(' || c == '+' || c == '-' || c == '*' || c == '/') s.push(c);
            else e = 1;
        }
        if (e || !h_int || s.size() != 1) cout<<-1<<"\n";
        else cout<<s.top()<<"\n";
    }
}
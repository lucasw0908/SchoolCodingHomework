#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

string oct2bin(int n, int m) {
    string out="";
    for (int i=(1<<--m); i>0; i>>=1) {
        if (n>=i) out+="1", n-=i;
        else out+="0";
    }
    return out;
} // 十進位轉二進位

signed main() {
    char c, p;
    int n, t;
    cin>>n; c=getchar(); // 多吃一個換行符 debug了一段時間才發現在oj上不加會爛
    for (int i=0; i<n; i++) {
        bool fisrt=1, skip=0;
        double a=0, b=0;
        stringstream ans;
        t = 1; p = ' ';
        while ((c=getchar())) {
            if (c=='\n' || c==EOF) {
                if (!skip) ans<<p<<oct2bin(t, 3)<<" ", b+=4;
                break;
            }
            if (skip) continue;
            else if (c!='0' && c!='1') skip=1; // 如果有非 0, 1 字元直接跳過
            else if (fisrt) fisrt=0; // 第一個字元不做處理 單純 p = c
            else if (c==p && t<7) t++;
            else ans<<p<<oct2bin(t, 3)<<" ", b+=4, t=1;
            p=c, a++;
        }
        if (skip) cout<<"-1\n";
        else cout<<ans.str()<<setprecision(0)<<fixed<<(b/a)*100<<"%\n";
    }
}
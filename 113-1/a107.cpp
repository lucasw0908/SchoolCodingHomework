#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define F first
#define S second
#define pii pair<int, int>
#define all(x) x.begin(), x.end() 

vector<vector<char>> A = {
    {'a', 'b', 'c', 'd', 'e'},
    {'f', 'g', 'h', 'i', 'j'},
    {'k', 'l', 'm', 'n', 'o'},
    {'p', 'r', 's', 't', 'u'},
    {'v', 'w', 'x', 'y', 'z'}
};

vector<vector<char>> B = {
    {'E', 'X', 'A', 'M', 'P'},
    {'L', 'B', 'C', 'D', 'F'},
    {'G', 'H', 'I', 'J', 'K'},
    {'N', 'O', 'R', 'S', 'T'},
    {'U', 'V', 'W', 'Y', 'Z'}
};

pii find_pos(char c, vector<vector<char>> v) {
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (v[i][j] == c) return {i, j};
        }
    }
    return {-1, -1};
}

signed main() {
    fastio
    int n;
    string s, ans="";
    cin>>n>>s;
    reverse(all(s));
    if (s[0] >= 'A' && s[0] <= 'Z') swap(A, B);
    for (int t=0; t<n; t+=2) {
        pii i=find_pos(s[t], A);
        pii j=find_pos(s[t+1], A);
        ans+=B[i.F][j.S];
        ans+=B[j.F][i.S];
    }
    cout<<ans<<"\n";
}
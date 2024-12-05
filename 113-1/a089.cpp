#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define int long long
 
const int n = 8;
vector<vector<int>> board(n, vector<int>(n, 0));
vector<int> col(n, 0), diag1(n<<1, 0), diag2(n<<1, 0);
 
int solve(int r) {
    if (r == n) return 0;
    int res = 0;
    for (int c=0; c<n; c++) {
        if (col[c] || diag1[r+c] || diag2[r-c+n-1]) continue; // 從row一層一層遞迴放皇后 如果那個column或雙對角線有皇后就跳過
        col[c] = diag1[r+c] = diag2[r-c+n-1] = 1;
        res = max(res, solve(r+1) + board[r][c] + (int)1e4); // 一般的八皇后+傳遞該格數值+每層加權(防抓到未放完的最大值)
        col[c] = diag1[r+c] = diag2[r-c+n-1] = 0;
    }
    return res;
}
 
signed main() {
    fastio
    int k; cin>>k;
    while (k--) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) cin>>board[i][j];
        }
        string s = to_string(solve(0)-(int)8e4); // 記得扣回去加權
        for (int i=0; i<5-s.size(); i++) cout<<" ";
        cout<<s<<"\n";
    }
}
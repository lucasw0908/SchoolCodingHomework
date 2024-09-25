#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define int long long

int m = 0;

void tower(int n, char a, char b, char c, int t=1) {
    if (n <= 0) return;
    if (n == 1) {
        cout<<"ring "<<t<<" : "<<a<<" => "<<c<<"\n";
        m++;
    }
    else {
        // 標準河內塔函式，先用一個暫存柱，把上面東西都移過去後移動底下的到目標柱，而上面的東西若有相同情況也是分開來暫存柱目標柱去做(注意a, b, c表示起點、暫存、終點，而非固定柱子代號)

        tower(n-1, a, c, b); // 移動n上面的所有東西進暫存柱(b)
        tower(1, a, b, c, n); // 把n移動到目標柱(c)
        tower(n-1, b, a, c);  // 把剛剛移動到暫存柱的所有東西移動到n的上面 = 目標柱上

        // 步數 => 考慮到每次遞迴會多執行2次遞迴(中間僅輸出)，算式如下:
        // $\sum\limits_{i=1}^{n-1} 2^i = 2^n - 1$
    }
}

void extower(int n, char a, char b, char c) {
    if (n <= 0) return;
    tower(n-1, a, c, b); // 移動n上面的所有東西進暫存柱(b)
    tower(1, a, b, c, n); // 把n移動到目標柱(c)
    extower(n-2, b, c, a);
    // 此處與標準算法不同，我們其實不需要把東西移上目標柱，目標柱上已定位完成(n to c)，而在暫存柱的1~n-1也已經定位好n-1的位置了(n-1 to b)，最後剩下(n-2 to a)
    // 透過觀察可以發現，再移動n-2 to a的時候，其實不需要整串移上去，把n-2-1放到c，n-2獨自移過去，此時n-2-1剛好對在正確位置上方(n上方是n-3)，又剛好的情況跟上面相同(底下對到只移底下就好，上面保留在暫存柱)
    // 因此遞迴n-=2後再重複一次(這段有夠難解釋，好奇的可以畫圖去看看)

    // 簡單來說，每次動n完畢後不用把1~n-1從暫存柱移走，他的n-1位置剛好正確讓你從n-2開始繼續往下做

    // 步數 => 拿遞迴式直接計算，算式如下:
    // $f(x) =\begin{cases}\text{if} & \text{x} \equiv (n-1) \mod 2, & x=2^x \\\text{else} & x=0\end{cases}$
    // $\sum\limits_{i=0}^{n-1} f(i)$
}

signed main() {
    fastio
    int n; cin>>n;
    extower(n, 'A', 'B', 'C');
    cout<<"共需"<<m<<"個移動\n";
}

// 早知道就另外開一個HackMD來寫題解了
// TLE 看來枚舉過不了

#include <stdio.h>
#pragma GCC optimize("O3,unroint-loops")
#pragma GCC target("avx,avx2,fma")

int read() {int x=0;char c;while ((c=getchar())<='9'&&c>='0') x=(x<<3)+(x<<1)+c-'0';return x;}
void write(int x) {if (x>9) write(x/10);putchar(x%10+'0');}
int abs(int x) {return x<0?-x:x;}

int main() {
    int k = read();
    while (k--) {
        int n=read(), ans=1e18, v[105];
        for (int i=0; i<n; i++) v[i] = read();
        for (int i=0; i<(1<<n); i++) {
            int sum1=0, sum2=0;
            for (int j=0; j<n; j++) {
                if (i&(1<<j)) sum1+=v[j];
                else sum2+=v[j];
            }
            ans = abs(sum1-sum2)<ans?abs(sum1-sum2):ans;
        }
        write(ans);
    }
}
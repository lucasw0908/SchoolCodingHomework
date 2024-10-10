#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

signed main() {
    char c;
    while ((c=getchar()) != EOF) {
        if ((c>'m'&&c<='z')||(c>'M'&&c<='Z')) putchar(c-13);
        else if (c>='A') putchar(c+13);
        else putchar(c);
    }
}
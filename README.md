# 資訊課的作業

> **註解我盡量上，有看不懂的部分可以把看不懂功能的函式丟給google**

先來講解最上面幾行

![圖片載入失敗](https://github.com/lucasw0908/SchoolCodingHomework/blob/main/img/template.png?raw=true)

```cpp=
#include<bits/stdc++.h>
```

萬用標頭檔，它的內容就是把所有的標頭檔引入，這樣就不用一直`include`其他東西了。

```cpp=
using namespace std;
```

使用命名空間`std`，如果沒加上這行要變成這樣寫:

![圖片載入失敗](https://github.com/lucasw0908/SchoolCodingHomework/blob/main/img/without_using_namespace_std.png?raw=true)

```cpp=
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
```

I/O優化，能讓你輸入輸出變快，不過這邊的題目基本上不會用到~~為啥這個OJ沒有top coder的機制啦~~

* 記得在`main()`裡面加上一行`fastio`才會有效果! (然後你會看到我不少code都沒加這行那就只是寫好看的XD)
* 跟`printf`、`scanf`會有衝突，如果使用了只能使用`cin`、`cout`。

```cpp=
#define int long long
```

讓所有`int`資料類型變成`long long`，同上這邊用不太到，用來防止題目數字給太大超出`int`的範圍。

注意在`define`之後要將`int main()`換成`signed main()`。

## 備註

若有任何關於題目的疑問都可以來問我٩(´ᗜ`*)୨

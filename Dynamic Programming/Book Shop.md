## 解题思路

-   这道题是经典的01背包问题。
-   `f[i][j]`表示从前i个物品中选择，价格不超过j的最大页数。
-   转移方程：
    -   不选第i件物品: `f[i][j] = f[i-1][j]` 总价值不改变，因为没有选择第i件物品。
    -   选择第i件物品:`f[i][j] = f[i-1][j-price[i]] + page[i]`
-   两种选择中选择最大价值的策略，最终答案就是选择前n件物品，最大价值不超过x，即`f[n][x]`
-   通过滚动数组，我们可以将第一维数组去掉。

## 时间复杂度

$O(MN)$

## 代码

```cpp

#include <bits/stdc++.h>
using namespace std;
int n, x;
const int N = 1e5+6;
const int M = 1e3+5;
extern int f[N];
int price[M], page[M];
int main(){
    scanf("%d%d", &n, &x);
    for(int i = 1; i <= n; i++) scanf("%d", &price[i]);
    for(int i = 1; i <= n; i++) scanf("%d", &page[i]);

    for(int i = 1; i <= n; i++){
        for(int j = x; j >= price[i]; j--){
            f[j] = max(f[j], f[j-price[i]] + page[i]);
        }
    }
    printf("%d\n", f[x]);
    return 0;

}
```


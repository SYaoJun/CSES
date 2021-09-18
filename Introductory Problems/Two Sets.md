## 解题思路

-   首先判断当前数字的前n项和是否能够均分，也就是判断前缀和是否是偶数，如果不是，直接结束。
-   如果是偶数肯定能分成两个数组，为了时间效率，我们从大往小枚举，当不满足条件的时候，从前面插入一个数。
-   最终输出集合中的数值以及没在集合中的数值。

## 复杂度

-   时间：$O(N)$
-   空间: $O(N)$

## 代码

```cpp
#include <bits/stdc++.h>
using namespace std;
using LL = long long;
int main(){
	LL n;
	scanf("%lld", &n);
	LL sum = n*(n+1)/2;
	if(sum&1) puts("NO");
	else{
		puts("YES"); 
		LL t = sum/2;
		unordered_set<int> st;
		for(int i = n; i >= 0 && t; i--){
			if(t - i >= 0) {
				st.insert(i);
				t -= i;
			}else{
				st.insert(t);
				break;
			}
		}
		printf("%d\n", st.size());
		for(auto& x: st) printf("%d ", x);
		puts("");
		printf("%d\n", n - st.size());
		for(int i = 1; i <= n; i++){
			if(!st.count(i)) printf("%d ", i);
		}
		puts("");
	}
	return 0;
}
```


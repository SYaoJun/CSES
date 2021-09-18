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

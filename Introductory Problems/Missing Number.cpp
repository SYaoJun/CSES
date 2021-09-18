#include <bits/stdc++.h>
using namespace std; 
using LL = long long;
int main(){
	int n;
	scanf("%d", &n);
	LL sum = 0;
	int x;
	for(int i = 0; i < n - 1; i ++) scanf("%d", &x), sum +=x;
	printf("%d\n", n*(LL)(n+1)/2-sum);
	return 0;
}

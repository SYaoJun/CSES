#include <iostream>
using namespace std;
int main(){
	typedef long long LL;
	LL n;
	scanf("%lld", &n);
	while(n != 1){
		printf("%lld ", n);
		if(n%2==1) n = 3*n + 1;
		else {
			n /= 2;
		}
	}
	printf("%lld\n", n);
	return 0;
} 

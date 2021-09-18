#include <bits/stdc++.h>
using namespace std;
const int P = 1e9+7;
using LL = long long; 
int qmi(int a, int b){
	int res = 1;
	while(b){
		if(b&1) res = (res * (LL)a) % P;
		a = (a * (LL)a) % P;
		b >>= 1;
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	cout<<qmi(2, n)<<endl;
	return 0;
}

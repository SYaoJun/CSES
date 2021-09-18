#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> res;
	
	
	for(int i = 2; i <= n; i+=2){
		res.push_back(i);
	}
	
	for(int i = 1; i <= n; i+=2){
		res.push_back(i);
	}
	
	bool tag = true;
	for(int i  = 1; i < n; i++){
		if(abs(res[i-1] - res[i]) == 1){
			tag = false;
			break;
		}
	}
	
	if(!tag) puts("NO SOLUTION");
	else{
		for(auto &x: res){
			cout<<x<<" ";
		}
	}
	return 0;
} 

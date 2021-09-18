#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int res = 0;
	int n = s.size();
	unordered_set<char> st{'A', 'G', 'C', 'T'};
	for(int i = 0; i < n;){
		int j = i; 
		while(j < n && st.count(s[j]) && s[j] == s[i]) j++;
		res = max(res, j - i);
		i = j;
	}
	cout<<res<<endl;
	
	return 0;
}

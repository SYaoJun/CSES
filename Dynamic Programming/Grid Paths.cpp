#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
char g[N][N];
int f[N];
const int MOD = 1e9+7;
int main(){

    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%s", g[i]+1);
  
    if(g[1][1]=='*') f[1] = 0;
    else f[1] = 1;

    for(int i = 1; i <= n ; i++)
        for(int j = 1; j <= n; j++){
            if(g[i][j]=='*') f[j] = 0;
            else f[j] = (f[j-1] + f[j]) % MOD;
        }
    printf("%d\n", f[n]);
    return 0;
}


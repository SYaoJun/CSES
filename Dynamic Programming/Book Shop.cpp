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

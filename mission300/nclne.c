#include<stdio.h>

int main() {
    int T, ans;
    long int n, tot, p;
    scanf("%d",&T);
    while (T--) {
        scanf("%ld",&p);
        tot = 1; ans = 1;
        while (p--) {
            if (ans==1) {
                scanf("%ld",&n);
                if (n==0) tot *= 2;
                else if (tot>=n) {tot -= n; tot *= 2;}
                else ans = 0;
            }
            else scanf("%ld",&n);
        }
        if (ans==1 && tot ==0) printf("Yes\n\n");
        else printf("No\n\n");
    }
    return 0;
}

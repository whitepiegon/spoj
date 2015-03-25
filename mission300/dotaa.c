#include<stdio.h>

int main() {
    int i, t, n, m, d, h;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d %d",&n,&m,&d);
        i=0;
        while (n--) {
            scanf("%d",&h);
            i+=(h-1)/d;
        }
        if (i>=m) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

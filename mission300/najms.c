#include<stdio.h>

unsigned long int A[100001], a;

int main() {
unsigned long int n, q, u, i, j;
    int t, p;
    char l;
    scanf("%d",&t);
    p=1;
    while (t--) {printf("Case %d:\n",p++);
        scanf("%uld",&n); scanf("%uld",&q);
        for(i=1;i<=n;i++) {scanf("%uld",&A[i]);}
        while (q--) {
            scanf(" %c",&l);
            if (l==119) {
                scanf("%uld",&i);scanf("%uld",&j);scanf("%uld",&a);
                for(i;i<=j;i++) {A[i]=A[i]+a;}
            }
            else if (l==109) {
                scanf("%uld",&u);
                A[u]=0;
            }
            else if (l==102) {
                scanf("%uld",&u);
                printf("%u\n",A[u]);
            }
        }
    }
    return 0;
}

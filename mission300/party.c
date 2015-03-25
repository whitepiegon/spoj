#include<stdio.h>
int A[102][502];
int main() {
    int p, v, P[102], V[102], i, n, j;
    for (i=0;i<102;i++) A[i][0]=0;
    while (1) {
        scanf("%d %d",&p,&n);
        if (p==0 && n==0) return 0;
        for (i=1;i<=n;i++) {
            scanf("%d %d",&P[i],&V[i]);
        }
        for (i=1;i<=n;i++) {
            for (j=0;j<=p;j++) {
                if (j>=P[i]) {
                    A[i][j]=max(A[i-1][j],V[i]+A[i-1][j-P[i]]);
                }
                else A[i][j]=A[i-1][j];
            }
        }
        v=A[n][p];

        j=p;
        for (i=1;i<=p;i++) {
            if (A[n][p-i]==v) j--;
        }
        printf("%d %d\n",j,v);
    }
    return 0;
}
int max(int i, int j) {return (i>j?i:j);}

#include<stdio.h>
int N[10001][10001];
int A[10001], n, max[2]={0,0}, ans;
int main() {
    int i, u, v;
    scanf("%d",&n);
    for (i=0;i<n-1;i++) {
        scanf("%d %d",&u,&v);
        N[u][v]=1;
        N[v][u]=1;
        A[u]++;
        A[v]++;
        if (max[0]<A[u]) {
            max[0]=A[u];
            max[1]=u;
        }
        if (max[0]<A[v]){
            max[0]=A[v];
            max[1]=v;
        }
    }
        getans(max[1], 0);
        printf("%d\n",ans);
    return 0;
}

int getans(int child, int parent) {
    int i, x1=0, x2=0, c;
    for (i=1;i<=n;i++) {
        c=0;
        if (N[child][i]==1 && i != parent) {
            c=1+getans(i,child);
            if (c>=x2) {
                x2=c;
                if (x2>x1) {
                    x2=x2+x1;
                    x1=x2-x1;
                    x2=x2-x1;
                }
                if (x1+x2 > ans) ans=x1+x2;
            }
        }
    }
    return x1;
}

#include<stdio.h>
int maxof(int i, int j, int k);
int D[101];
int main() {
    int t, h, w, A[101], max, i, j;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d",&h,&w);
        max =0;
        for (i=0;i<w;i++) {
            scanf("%d",&D[i]);
            max = maxof(max,D[i],0);
        }
        for (j=1;j<h;j++) {
            for (i=0;i<w;i++) {
                scanf("%d",&A[i]);
            }
            A[0]=A[0] + maxof(D[0],D[1],0);
            max =D[0];
            for (i=1;i<w-1;i++) {
                A[i] = A[i] + maxof(D[i-1],D[i],D[i+1]);
                max = maxof(max,A[i],0);

            }
            A[w-1]=A[w-1] + maxof(D[w-1],D[w-2],0);
            max = maxof(max,A[w-1],0);
            for (i=0;i<w;i++) {
                D[i]=A[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

int maxof(int i, int j, int k) {
    return (i>j?i:j)>k?(i>j?i:j):k ;
}

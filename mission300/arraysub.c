#include<stdio.h>
long i, m, A[1000001], j, k, max, t1, t2;
int main() {
    scanf("%ld",&i);
    for (j=0;j<i;j++) scanf("%ld",&A[j]);
    scanf("%ld",&m);
    t1=0;t2=0;
    for (j=1;j<i-(m-1)/2;j++) {
        max=0;
        if ((j-t2)<(m-1)/2) {
            if (t1<A[j+(m-1)/2]) {
                t1=A[j+(m-1)/2];
                t2=j+(m-1)/2;
            }
            max=t1;
        }
        else {
            t1=0;
            for (k=0;k<m;k++) {
                max=max>A[j+k]?max:A[j+k];
                if (t1<max) {
                    t1=max;
                    t2=j+k;
                }
            }
        }
        printf("%ld ",max);
    }
    return 0;
}

#include<stdio.h>

int main() {
    int N, A[10001], avg, ans, i;
    while (1) {
        scanf("%d",&N);
        if (N==-1) return 0;

        avg =0;
        for (i=0;i<N;i++) {
            scanf("%d",&A[i]);
            avg = avg + A[i];
        }
        if (avg%N != 0) printf("-1\n");
        else {
            ans = 0;
            avg = avg/N;
            for (i=0;i<N;i++) {
                if (A[i]<avg)
                ans = ans + (avg-A[i]);
            }
            printf("%d\n",ans);
        }
    }
}

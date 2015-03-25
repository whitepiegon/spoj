#include<stdio.h>

int main () {
    int res[10];
    int T, N;
    long long int b, i;
    scanf("%d",&T);
    while (T--) {
        scanf("%d %lld",&N,&b);
    if (b==0) printf ("1\n");
    else {
        N = N%10;
        res[0] = N; i=1;
        while ((N*res[0])%10 != res[0]) {
            N = (N*res[0])%10;
            res[i] = N;
            i++;
        }
        b = b%i;
        if (b==0) b=i;
        printf("%d\n",res[b-1]);
    }
    }
    return 0;
}

#include<stdio.h>

int main() {
    long long int T, N, i, a, sum;
    scanf("%lld",&T);
    while (T--) {
        scanf("%lld",&N);
        sum = 0;
        for (i=0;i<N;i++) {
            scanf("%lld",&a);
            a = a%N;
            sum = (sum + a) %N;
        }
        if (sum%N==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

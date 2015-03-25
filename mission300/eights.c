#include<stdio.h>

int main() {
    long long int T, a;
    int A[4], j;
    A[0] = 192; A[1] = 442; A[2] = 692; A[3] = 942;
    scanf("%lld",&T);
    while (T--) {
        scanf("%lld",&a);
        a=a-1;
        j=a%4;
        a=a/4;
        if (a!=0) printf("%lld%d\n",a,A[j]);
        else printf("%d\n",A[j]);
    }
    return 0;
}

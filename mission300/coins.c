#include <stdio.h>
long long int getAns(long long int A[], long long int N);
int main() {
long long int A[200001], i, N, k, l, m;
A[0] = 0; A[1] = 1;
for (i=2;i<200000;i++) {
    k = i/2; l = i/3; m = i/4;
    if (i>(A[k]+A[l]+A[m]))
        A[i] = i;
    else A[i] = A[k]+A[l]+A[m];
}
while (scanf("%lld",&N) == 1) {
    printf("%lld\n",getAns(A,N));
}
return 0;
}

long long int getAns(long long int A[], long long int N) {
    if (N<200000) return A[N];
    long long int k, l, m;
    k = getAns (A,N/2);
    l = getAns (A,N/3);
    m = getAns (A,N/4);
    return k+l+m;
}

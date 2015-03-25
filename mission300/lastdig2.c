#include<stdio.h>
#include<string.h>

int main () {
    int res[20];
    char A[1001];
    int T, N, n;
    unsigned long long int b, i;
    scanf("%d",&T);
    while (T--) {
        scanf(" %s",A);
        scanf("%ulld",&b);
        n = strlen(A);
        N = A[n-1]-'0';
    if (N==0) printf("0\n");
    else if (N==1) printf("1\n");
    else if (b==0) printf ("1\n");
    else {
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

#include <stdio.h>
long int D[2002][2002];
long int maxof (long int i, long int j);
int main () {
    long int max;
    int A[2002], i, n, j, k, p;
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%d",&A[i]);
    if (n==1) {printf("%d",A[1]); return 0;}

    i=2;
    D[1][1] = A[1];
    for (i=2;i<n;i++) D[1][i]=0;
    D[1][n] = A[n];

    for (i=2;i<=(n+1)/2;i++) {
        for (j=1;j<=n;j++) {
            if (j==1) D[i][j]=A[j]*i+D[i-1][n-i+2];
            else if (j==n) D[i][j]=A[j]*i+D[i-1][i-1];
            else if (j<i) {
                p =j-1; k =n-i+j+1;
                D[i][j]=A[j]*i+maxof(D[i-1][p],D[i-1][k]);
            }
            else if ((n-j)<i) {
                p=j+1; k =i-n+j-1;
                D[i][j]=A[j]*i+maxof(D[i-1][p],D[i-1][k]);
            }
            else if (j==i && (j-n)==i) {
                D[i][j]=A[j]*i+maxof(D[i-1][j-1],D[i-1][j+1]);
            }
            else if (j==i) D[i][j]=A[j]*i+D[i-1][j-1];
            else if (j-n == i) D[i][j]=A[j]*i+D[i-1][j+1];
            else D[i][j]=0;
        }
    }
    for (i=(n+1)/2+1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            if (j==1) D[i][j]=A[j]*i+D[i-1][n-i+2];
            else if (j==n) D[i][j]=A[j]*i+D[i-1][i-1];
            else if (j<i && (n-i+1)>j) {
                p =j-1; k =n-i+j+1;
                D[i][j]=A[j]*i+maxof(D[i-1][p],D[i-1][k]);
            }
            else if (j>i && (n-i+1)<i) {
                p=j+1; k =i-n+j-1;
                D[i][j]=A[j]*i+maxof(D[i-1][p],D[i-1][k]);
            }
            else {
                p =j-1; k =n-i+j+1;
                max=maxof(D[i-1][p],D[i-1][k]);
                p=j+1; k =i-n+j-1;
                max=maxof(max,D[i-1][p]);
                max=maxof(max,D[i-1][k]);
                D[i][j]=A[j]*i+max;
            }
        }
    }
    max=0;
    for (i=1;i<=n;i++) {for(j=1;j<=n;j++)printf("%ld ",D[i][j]);printf("\n");}
    for (j=1;j<=n;j++) {max=maxof(max,D[n][j]);}



    printf("%lld",max);
    return 0;
}

long int maxof (long int i, long int j) {
    return i>j?i:j;
}

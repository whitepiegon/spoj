#include<stdio.h>
#include<string.h>
int G[2001][2001];

int min(int,int,int);
int main() {
    int a, b, i, j, t;
    char A[2001], B[2001];
    scanf("%d",&t);
while (t--) {
    scanf(" %s",A);
    scanf(" %s",B);
    a = strlen(A);
    b = strlen(B);
    for (i=0;i<=a;i++) {
        for (j=0;j<=b;j++) {
            if (i==0 && j==0) G[i][j] = 0;
            else if (i==0) G[i][j] = j;
            else if (j==0) G[i][j] = i;
            else {
                int cou = 1;
                if (A[i-1]==B[j-1]) cou--;
                G[i][j] = min(G[i-1][j]+1,G[i][j-1]+1,G[i-1][j-1]+cou);
            }
        }
    }
    printf("%d\n",G[a][b]);
}
    return 0;
}

int min(int i,int j, int k) {
    return (i<j?i:j)<k?(i<j?i:j):k;
}

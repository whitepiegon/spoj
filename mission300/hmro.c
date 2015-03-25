#include<stdio.h>
#include<string.h>
char A[26262611][2][4], s1[100001][12], s2[100001][5];
int in[27][27][27][10];
int main () {
    int t;
    long int p,z,i;
    scanf("%d",&t);
    while (t--) {
        scanf("%ld",&p);
        for (i=0;i<p;i++) {
            scanf(" %s",s1[i]);
            scanf(" %s",s2[i]);
        }
    }
    return 0;
}

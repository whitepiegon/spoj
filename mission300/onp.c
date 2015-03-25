#include<stdio.h>
#include<string.h>
/*
    ( - 40
    ) - 41
    + - 43
    - - 45
    * - 42
    / - 47
    ^ - 94
*/
int pop (char B[], int j);
int main () {
    int T, len, i, j;
    char A[401], B[401];
    scanf("%d",&T);
    while (T--) {
        j=0;
        scanf(" %s",A);
        len = strlen (A);
        for (i=0;i<len;i++) {
            if (A[i]==40) {B[j]=A[i]; j++;}
            else if (A[i]==41) {j=pop(B,j-1);}
            else if (A[i]==43 || A[i]==45 || A[i] == 42 || A[i]==47 || A[i]==94) {B[j]=A[i]; j++;}
            else printf("%c",A[i]);
        }
        printf("\n");
    }
    return 0;
}

int pop (char B[], int j) {
    if (B[j] == 40) return j;
    else {
        printf("%c",B[j]);
        return pop(B,j-1);
    }
}

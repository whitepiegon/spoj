#include<stdio.h>

int main() {
    int t, A[1001], num, j, k;
    while (1) {
        scanf("%d",&t);
        if (t==0) return 0;
        j=1; k=0; A[0] = -1;
        while (t--) {
        scanf("%d",&num);
        if (num==j) {
            j++;
            while (k>0 && A[k]==j) {
                j++; k--;
            }
        }
        else {
            k++;
            A[k] = num;
        }
    }
    if (k==0) printf("yes\n");
    else printf("no\n");
    }
}

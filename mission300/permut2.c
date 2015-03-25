#include <stdio.h>

int main() {
    int n, ans, num, i, A[100001], B[100001];
    while (1) {
        scanf("%d",&n);
        if (n==0) return 0;
        else {
            i=1; ans = 1;
            while (n--) {
                scanf("%d",&num);
                B[num] = i;
                A[i] = num;
                i++;
            }
            for (n=1;n<i;n++) {
                if (A[n] != B[n]) {ans = 0;break;}
            }
            if (ans) printf("ambiguous\n");
            else printf("not ambiguous\n");
        }
    }
}

#include<stdio.h>

int main() {
    int N, ans;
    while (1) {
        ans = 0;
        scanf("%d",&N);
        if (N==0) return 0;
        while (N) {ans = ans + N*N;N--;}
        printf("%d\n",ans);
    }
}

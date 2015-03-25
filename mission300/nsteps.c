#include<stdio.h>

int main() {
    int N, x, y, ans;
    scanf("%d",&N);
    while (N--) {
        scanf("%d %d",&x,&y);
        if (x==y || x==y+2) {
            if (x%2==0) {
                ans = x+y;
                printf("%d\n",ans);
            }
            else {
                ans = x+y-1;
                printf("%d\n",ans);
            }
        }
        else printf("No Number\n");
    }
    return 0;
}

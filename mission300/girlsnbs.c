#include<stdio.h>

int main() {
    int g, b, ans;
    while (1) {
        scanf("%d %d",&b,&g);
        if (b==-1 && g==-1) return 0;
        if (g>b) {
            g+=b;
            b=g-b;
            g-=b;
        }
        ans = b/(g+1);
        if (b > ans*(g+1)) ans++;
        printf("%d\n",ans);
    }
    return 0;
}

#include<stdio.h>

int main() {
    double ans;
    int t, i=1;
    scanf("%d",&t);
    while (t--) {
        scanf("%lf",&ans);
        ans = 4*ans*ans + 0.25;
        printf("Case %d: %.2f\n",i++,ans);
    }
    return 0;
}

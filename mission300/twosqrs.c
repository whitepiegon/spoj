#include<stdio.h>
#include<math.h>
int main() {
    int t, ans;
    long long int n, s, i=0, k, l, j=0;
    scanf("%d",&t);
    while (t--) {
        ans=0;
        scanf("%lld",&n);
        for (i=0;i*i<=n;i++) {
            l=sqrt(n-(i*i));
            if ((n-(i*i))==l*l) {
                ans=1;
                break;
            }
        }
        if (ans==1)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

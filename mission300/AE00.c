#include<stdio.h>

int value (int i);
int oddvalue (int i);

int main() {
    int N, ans=1,i;
    scanf("%d",&N);
    for (i=2;i<=N;i++) {
         if (i%2 != 0) ans += oddvalue(i);
         else ans+=value(i);
    }
    printf("%d",ans);
    return 0;
}

int value (int n) {
    int ans =0, i;

    for (i=2;i*i<=n;i++) {
        if (n%i==0) ans++;
    }
    ans ++;
    return ans;
}

int oddvalue (int n) {
    int ans =0, i;

    for (i=3;i*i<=n;i=i+2) {
        if (n%i==0) ans++;
    }
    ans ++;
    return ans;
}

#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    long long int i, j, sum, ter, sm, mid;
    while (t--) {
        mid = 0;
        scanf("%lld %lld %lld",&i,&j,&sum);
        if (i==j) {
            ter = sum/i;
            j=0;
        }
        else {
        sm = i+j;
        if (sum%sm == 0) {
            ter = 2*(sum/sm);
            j = (j-i)/(ter-5);
        }
        else {
            mid = sum%sm;
            sum = sum-mid;
            ter = 2*(sum/sm) +1;
            j = (sum/sm)-2;
            j = (mid-i)/j;
        }
        i=i-2*j;
        }
        printf("%lld\n",ter);
        while(ter--) {
            printf("%lld ",i);
            i +=j;
        }
        printf("\n");
    }
    return 0;
}

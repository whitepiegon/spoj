#include<stdio.h>
#include<math.h>

int main() {
    int t,n,a,i,j;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&a);
        n = sqrt(a);
        if (n*(n+1) == 2*a) printf("yes\n");
        else {
            while (n*(n+1) <= 2*a) n++;
            n--;
        }
        j = a;
        a = a - n*(n+1)/2;
        if (n%2 == 0) {
            if (a==0) {
                printf("TERM %d IS %d/1\n",j,n);
            }
            else {
                printf("TERM %d IS %d/%d\n",j,n+2-a,a);
            }
        }
        else {
            if (a==0) {
                printf("TERM %d IS 1/%d\n",j,n);
            }
            else {
                printf("TERM %d IS %d/%d\n",j,a,n+2-a);
            }
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
    int t;
    double s;
    scanf("%d",&t);
    while(t--) {
        scanf("%lf",&s);
        printf("%.6lf\n",1-1/(3*sqrtf(s/2)));
    }
    return 0;
}

#include <stdio.h>

int main() {
    double l;
    while (1) {
        scanf("%lf",&l);
        if (l==0) return 0;
        printf("%.2lf\n",(l*l)/(2*3.141592));
    }
}

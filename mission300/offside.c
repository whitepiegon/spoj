#include<stdio.h>

int main() {
    long int i, j, min, a;
    int b;
    while (1) {
        scanf("%ld %ld",&i,&j);
        if (i==0 && j==0) return 0;
        i--;
        scanf("%ld",&min);
        while (i--) {
            scanf("%ld",&a);
            if (min>a) min=a;
        }
        b = 0;
        while (j--) {
            scanf("%ld",&a);
            if (min>=a) b++;
        }
        if (b>=2) {
                printf("N\n");
            }
        else {
            printf("Y\n");
        }
    }
}

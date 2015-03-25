#include<stdio.h>

int main() {
    int t, o;
    long int r;
    scanf("%d",&t);
    while (t--) {
        scanf("%ld %d",&r,&o);
        if (o==0) printf("Airborne wins.\n");
        else printf("Pagfloyd wins.\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    long int i;
    scanf("%ld",&i);
    if (i%10==0) printf("2");
    else printf("1\n%d",i%10);
    return 0;
}

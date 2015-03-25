#include<stdio.h>

int main() {
    long long int i;
    scanf("%lld",&i);
    while (i%2 == 0) {
        i = i/2;
    }
    if (i == 1) printf("TAK");
    else printf("NIE");

    return 0;
}

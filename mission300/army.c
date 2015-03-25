#include<stdio.h>

int main() {
    int T, g, m, i, max1, max2;
    scanf("%d",&T);
    while (T--) {
        scanf("%d %d",&g,&m);
        scanf("%d",&max1);
        g--;
        while (g--) {
            scanf("%d",&i);
            max1 = max1>i?max1:i;
        }
        scanf("%d",&max2);
        m--;
        while (m--) {
            scanf("%d",&i);
            max2 = max2>i?max2:i;
        }
        if (max1<max2) printf("MechaGodzilla\n");
        else printf("Godzilla\n");
    }
    return 0;
}

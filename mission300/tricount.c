#include <stdio.h>

int main() {
    unsigned long int A[100001]={0}, B1[100001]={0}, B2[100001]={0}, i, n=0, o=0, p=0, t, i2, i1, k, ans, z=1000000;
    for (i=1;i<=z;i++) {
        n += i*(i+1)/2;
        if (i%10==0) A[i/10] = n;
        if (i%2==0) {
            o += i*(i+1)/2;
            if (i%20==0) B2[i/20] = o;
        }
        else {
            p += i*(i+1)/2;
            if ((i-1)%20==0) B1[(i-1)/20] = p;
        }
    }
    scanf("%uld",&t);
    while (t--) {
        scanf("%uld",&n);
        i = n/10; i1 = A[i];
        if (n%10 != 0) {
            i = i*10; i++;
            while (i<=n) {
                i1 += i*(i+1)/2;
                i++;
            }
        }
        k = n/2;
        i = k/20;
        if (n%2==0) {
            i2 = B1[i];
            if (k%20 != 1) {
                i = i*20 + 1; i+=2;
                k = k - (i-1)/2;
                while (k--) {
                    i2 += i*(i+1)/2;
                    i += 2;
                }
            }
        }
        else {
            i2 = B2[i];
            if (k%20 != 0) {
                i = i*20; i=i+2;
                k = k - i/2+1;
                while (k--) {
                    i2 += i*(i+1)/2;
                    i += 2;
                }
            }
        }
        ans = i1 + i2;
        printf("%u\n",ans);
    }
    return 0;
}

#include<stdio.h>

int main() {
    int A[5001], B[5001], i, ans, cou;
    char C[5001];
    while (1) {
        scanf(" %s",C);
        if (C[0] == 48) return 0;

        A[0] = 0;   B[0] = 0;
        A[1] = 1;   B[1] = 0;
        A[2] = 2;   B[2] = 1;
        A[3] = 3;   B[3] = 2;
        for (i=4;i<=5000;i++) {
            A[i] = 2*A[i-2] + B[i-2];
            B[i] = A[i-2] + B[i-2];
        }
        cou = 0; ans = 1; i=0;
        while (C[i] != 0) {
            if (C[i] == 49 || C[i] == 50) {cou++;}
            else {
                if (C[i] != 48 )cou++;
                if (cou>1 && C[i] == 48) cou--;
                ans = ans * A[cou];
                cou = 0;
            }
            i++;
        }
        if (cou != 0) ans = ans * A[cou];
        printf ("%d\n",ans);
    }
}

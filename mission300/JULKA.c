#include<stdio.h>
#include<string.h>

int main() {
    int mon=10;
    char A[101], B[101];
    int a, b, carry, i, j, num;
    while (mon--) {
        scanf(" %s",A);
        scanf(" %s",B);
        a = strlen(A);
        b = strlen(B);
        carry = 0;
        for (i=1;i<=b;i++) {
            if ((A[a-i] + carry)<B[b-i]) {
                num = 10 + A[a-i] + carry - B[b-i];
                B[a-i] = '0' + num;
                carry = -1;
            }
            else {
                num = A[a-i] + carry - B[b-i];
                B[a-i] = '0' + num;
                carry = 0;
            }
        }
        for (i=a-b-1;i>=0;i--) {
            num = A[i] + carry - 48;
            carry = 0;
            if (num<0) {num=num+10; carry = -1;}
            B[i] = '0' + num;
        }
        B[a]=A[a];
        carry = 0;
        for (i=0;i<a;i++) {
            num = B[i] - 48;
            num = num + carry * 10;
            carry = num%2;
            num = num/2;
            B[i] = '0' + num;
        }
        carry = 0;
        for (i=1;i<=a;i++) {
            if ((A[a-i] + carry)<B[a-i]) {
                num = 10 + A[a-i] + carry - B[a-i];
                A[a-i] = '0' + num;
                carry = -1;
            }
            else {
                num = A[a-i] + carry - B[a-i];
                A[a-i] = '0' + num;
                carry = 0;
            }
        }
        i = 0;
        while (A[i]=='0') i++;
        for (i;i<a;i++) printf("%c",A[i]);
        printf("\n");
        i =0;
        while (B[i]=='0') i++;
        if (i==a) printf("0");
        for (i;i<a;i++) printf("%c",B[i]);
        printf("\n");

    }

return 0;
}
